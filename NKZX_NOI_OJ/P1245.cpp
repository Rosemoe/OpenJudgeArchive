#include<cstdio>
int n,k;
struct mo{
    int pre,nxt;
}f[1001];
void c(){
    for(int i=1;i<=n;i++){
        f[i].nxt=i+1;
        f[i].pre=i-1;
        if(i==1) f[i].pre=n;
        if(i==n) f[i].nxt=1;
    }
}
void g(){
    int ct=n;
    int i=1;
    while(ct>1){
        int m=(k-1)%ct+1;
        for(int j=m;j>1;j--){
            i=f[i].nxt;
        }
        f[f[i].pre].nxt=f[i].nxt;
        f[f[i].nxt].pre=f[i].pre;
        i=f[i].nxt;
        ct--;
    }
    printf("%d",i);
}
int main(){
    scanf("%d%d",&n,&k);c();g();return 0;
}
