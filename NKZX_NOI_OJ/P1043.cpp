#include<cstdio>
int main(){
    int n,values[32]={0,1};
    scanf("%d",&n);
    for(int i = 1;i <= n;i++)
        printf("%d ",values[i+1] = values[i] + values[i-1]);
    return 0;
}
