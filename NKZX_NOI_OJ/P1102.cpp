#include<cstdio>
int main(){
    int n,pre1=0,pre2=1,curr=1;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        curr=pre1+pre2;
        pre1=pre2;
        pre2=curr;
    }
    printf("%d",curr);
    return 0;
}
