#include<cstdio>
int val[1001];
int main(){
    int n,height,k;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&val[i]);
    }
    for(int i=1;i<=n;i++){
        int best = 100000000,index =0;
        for(int v=1;v<=n;v++){
            if(i == v)
                continue;
            if(val[v]>val[i] && val[v]-val[i] < best - val[i]){
                best = val[v];
                index = v;
            }
        }
        printf("%d\n",index);
    }
    return 0;
}
