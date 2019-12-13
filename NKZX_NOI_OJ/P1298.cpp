#include<cstdio>
bool yy[1001];
int main(){
    int jj,zz,kk=0;
    scanf("%d",&jj);
    for(int i=0;i<jj;i++){
        scanf("%d",&zz);
        if(!yy[zz]){
            yy[zz]=1;
            kk++;
        }
    }
    printf("%d\n",kk);
    for(int i=1;i<=1000;i++){
        if(yy[i])
            printf("%d ",i);
    }
    return 0;
}
