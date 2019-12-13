#include<cstdio>
int n,m,c,t[40000];
int main(){
    scanf("%d%d",&n,&m);
    for(int i = 0;i < n + m;i++){
        scanf("%d",&c);
        t[c]++;
    }
    for(int i = 0;i < 40000;i++){
        for(int j = 0;j < t[i];j++){
            printf("%d ",i);
        }
    }
    return 0;
}
