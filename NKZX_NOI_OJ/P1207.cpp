#include<cstdio>
int main(){
    int n,i=2;
    scanf("%d",&n);
    while(n!=1)
        if(n%i==0){
            n/=i;
            printf("%d ",i);
        }else i++;
    return 0;
} 
