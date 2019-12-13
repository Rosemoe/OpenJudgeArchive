#include<cstdio>
int main(){
    int n,pre=0,curr=1,a;
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        a=curr+pre;
        pre=curr;
        curr=a;
    }
    printf("%d",curr);
    return 0;
}
