#include<cstdio>
int val[1000000];
int main(){
    int n,height,k;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&val[i]);
    }
    scanf("%d",&k);
    for(int i=0;i<n;i++){
        if(val[i]!=k){
            printf("%d ",val[i]);
        }
    }
    return 0;
}
