#include<cstdio>
bool a[101];
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int f=0,t=0,s=0;
    do{
        t++;
        if(t==n+1) t=1;
        if(a[t]==false) s++;
        if(s==m){
            s=0;
            printf("%d\n",t);
            a[t]=true;
            f++;
        }
    }while(f != n);
    return 0;
}
