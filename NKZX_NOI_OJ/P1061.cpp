#include<cstdio>
bool val[10000];
int main(){
    int l,m,s,e;
    scanf("%d%d",&l,&m);
    for(int i = 0;i < m;i++){
        scanf("%d%d",&s,&e);
        for(int x=s;x<=e;x++){
            val[x]=1;
        }
    }
    int count=l+1;
    for(int i = 0;i <= l;i++){
        if(val[i]==1)
            count--;
    }
    printf("%d",count);
    return 0;
}
