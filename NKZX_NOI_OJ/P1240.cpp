#include<cstdio>
#include<cmath>
int s(int n){
    int s=0;
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0){
            s+=n/i+i;
        }
    }
    return s;
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        int v = s(i);
        if(i == s(v) && v <= n){
            printf("%d %d\n",i,v);
        }
    }
    return 0;
}
