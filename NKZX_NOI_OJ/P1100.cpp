#include<cstdio>
int main(){
    int n;int pre1=0,pre2=0,curr=1;
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        pre1=pre2;
        pre2=curr;
        curr=pre1+pre2;
        curr%=9997;
    }
    printf("%d",curr);
    return 0;
}
