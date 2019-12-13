#include<cstdio>
int main(){
    int v[100],n,x;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&v[i]);
    }
    scanf("%d",&x);
    bool lucky = false;
    for(int i=0;i<n;i++){
        if(v[i] == x){
            printf("%d",i+1);
            lucky = true;
            break;
        }
    }
    if(!lucky)
        printf("0");
    return 0;
}
