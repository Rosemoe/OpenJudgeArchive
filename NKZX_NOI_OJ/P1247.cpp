#include<cstdio>
struct Form{
    int left,right,top,bottom;
}f[2];
int c=0;
bool pointOf(Form v,int x,int y){
    if(x>=v.left&&x<v.right&&y>=v.top&&y<v.bottom){
        return 1;
    }
    return 0;
}
int main(){
    for(int i=0;i<2;i++) scanf("%d%d%d%d",&f[i].left,&f[i].right,&f[i].top,&f[i].bottom);
    for(int i=f[0].left;i<f[0].right;i++){
        for(int j=f[0].top;j<f[0].bottom;j++){
            if(pointOf(f[1],i,j)){
                c++;
            }
        }
    }
    printf("%d",c);
    return 0;
}
