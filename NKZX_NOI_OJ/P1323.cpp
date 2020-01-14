#include<cstdio>
bool st[500];
int main(){
    int n,m,p=1,d=1,k=1,v;
    scanf("%d%d",&n,&m);
    v=n;
    while(v > 1) {
        if(k==m){
            st[p]=1;
            v--;
        }
        int t=-1;
        for(int i=p;i<=n&&i>=1;i+=d) if(!st[i]&&p!=i) {t=i;break;}
        if(t == -1) {
            d=-d;
            for(int i=p;i<=n&&i>=1;i+=d) if(!st[i]&&p!=i) {t=i;break;}
        }
        p=t;k++;
        if(k==m+1) k=1;
    }
    for(int i=1;i<=n;i++) if(!st[i]) printf("%d",i);
    return 0;
}
