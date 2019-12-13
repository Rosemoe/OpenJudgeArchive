#include<cstdio>
int m,n,k,a=0,b=0;
int main(){
    scanf("%d%d%d",&m,&n,&k);
    for(int i=0;i<k;i++){
        printf("%d %d\n",++a,++b);
        if(a>m-1) a=0;
        if(b>n-1) b=0;
    }
    return 0;
}
