#include<cstdio>
int val[1000000];
int main(){
    int n,height,kk;
    scanf("%d%d",&n,&kk);
    for(int i=0;i<n;i++){
        scanf("%d",&val[i]);
    }
    for(int i=0;i<kk;i++){
        int count=0;
        scanf("%d",&height);
        for(int i=0;i<n;i++){
            if(val[i]==height)
                count++;
        }
        printf("%d ",count);
    }
    return 0;
}
