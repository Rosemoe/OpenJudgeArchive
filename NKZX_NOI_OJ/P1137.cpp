#include<cstdio>
int main(){
    int m,t,count=0,curr=1;
    scanf("%d%d",&m,&t);
    while(curr<=m){
        int copy=curr;
        while(copy){
            if(copy%10==t){
                count++;
                break;
            }
            copy/=10;
        }
        curr++;
    }
    printf("%d",m-count);
    return 0;
}
