#include<cstdio>
bool val[1001];
int main(){
    int n,count=0,c;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&c);
        if(!val[c]){
            val[c]=1;
            count++;
        }
    }
    printf("%d\n",count);
    for(int i=0;i<=1000;i++){
        if(val[i])
            printf("%d ",i);
    }
    return 0;
}
