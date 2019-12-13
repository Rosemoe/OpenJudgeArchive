#include<cstdio>
int m(int n){
    int v = 2,max = 0;
    while(n != 1){
        if(n%v==0){
            n/=v;
            if(max<v){
                max=v;
            }
        }else{
            v++;
        }
    }
    return max;
}
int main(){
    int n,x,max=0,v,ni=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        v=m(x);
        if(v>max){
            max=v;
            ni=x;
        }
    }
    printf("%d",ni);
    return 0;
