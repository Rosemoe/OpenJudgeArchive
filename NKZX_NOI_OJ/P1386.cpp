#include<cstdio>
#include<cmath>
int count(const int n){
    int s = 1;
    const double high = sqrt(n);
    for(int i = 2;i <= high;i++){
        if(n % i == 0){
            s += i;
            if(i * i != n){
                s += n / i;
            }
        }
    }
    return s;
}
int main(){
    int m,n;
    scanf("%d%d",&m,&n);
    if(m == 1){
        m++;
    }
    for(int i = m;i <= n;i++){
        if(count(i) == i){
            printf("%d\n",i);
        }
    }
    return 0;
}
