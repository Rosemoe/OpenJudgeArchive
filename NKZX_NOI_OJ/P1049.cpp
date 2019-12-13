#include<cstdio>
int main(){
    int v[1000],n,count=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&v[i]);
    }
    int c1,c2;
    for(int i=0;i<n;i++){
        c1=c2=0;
        for(int i2=0;i2<i;i2++){
            if(v[i2] > v[i]){
                c1++;
            }
        }
        for(int i2=n-1;i2>i;i2--){
            if(v[i2] > v[i]){
                c2++;
            }
        }
        if(c1 == c2){
            count ++;
        }
    }
    printf("%d",count);
    return 0;
}
