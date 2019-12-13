#include<cstdio>
int a[100][100];
bool yy[100],f=1;
int n;
void yyStart(int i){
    if(!yy[i]){
        printf(f?"%d":"-%d",i+1);
        yy[i]=1;
        f=0;
    }
    for(int j=0;j<n;j++){
        if(a[i][j]&&!yy[j]){
            yyStart(j);
        }
    }
}
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    yyStart(0);
    return 0;
}
