#include<cstdio>
short val[10000],n,count=0;
double sum=0;
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&val[i]);
        sum+=val[i];
    }
    sum/=n;
    int count=0;
    for(int i=0;i<n;i++){
        if(val[i]>sum){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
