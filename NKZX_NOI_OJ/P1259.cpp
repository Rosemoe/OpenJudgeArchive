#include<cstdio>
int main(){
    short h,w,m=0,v[50][50],c;
    scanf("%hd%hd",&h,&w);
    for(int i=0;i<h;i++)
        for(int j=0;j<w;j++)
            scanf("%hd",&v[i][j]);
    for(int i=0;i<h;i++)
        for(int j=0;j<w;j++){
            scanf("%hd",&c);
            if(c==v[i][j]) m++; 
        }
    printf("%d",m);
    return 0;
}
