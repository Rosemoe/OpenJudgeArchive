#include<cstdio>
#include<cmath>
bool isPrime(int v){
    if(v<=2) return true;
    const int m = ceil(sqrt(v));
    for(int i=2;i<=m;i++){
        if(v%i==0) return false;
    }
    return true;
}
int main(){
    int m;
    scanf("%d",&m);
    for(int i=2;i<=m;i++){
        if(isPrime(i))
            printf("%d ",i);
    }
    return 0;
}
