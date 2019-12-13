#include<cstdio>
int val[1000000];
int main(){
    int n,height,count=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&val[i]);
    }
    scanf("%d",&height);
    for(int i=0;i<n;i++){
        if(val[i]==height)
            count++;
    }
    printf("%d",count);
    return 0;
}
