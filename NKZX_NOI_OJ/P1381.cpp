#include<cstdio>
#include<cmath>
bool prime(const int n){
    for(int i = 2;i <= sqrt(n);i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n;
    scanf("%d",&n);
    puts(prime(n) ? "prime" : "not prime");
    return 0;
}
