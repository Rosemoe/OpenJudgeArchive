#include<cstdio>
#include<cmath>
bool isPrime(int j){
    if(j == 1) return 0;
    const int high = floor(sqrt(j));
    for(int i = 2;i <= high;i++){
        if(j % i == 0){
            return 0;
        }
    }
    return 1;
} 
bool isLucky(int n){
    int i = 2,c = 0,b=n;
    while(n!=1)
        if(n%i==0){
            n/=i;
            c++;
        }else{
            i++;
            if(i >= 4) i++;
        }
    return isPrime(c);
}
int main(){
    int n,i=2;
    scanf("%d",&n);
    for(;i<=n;i++){
        if(isLucky(i)){
            printf("%d\n",i);
        }
    }
    return 0;
} 
