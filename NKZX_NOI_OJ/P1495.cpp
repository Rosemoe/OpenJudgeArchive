#include<cstdio>
#include<cmath>
int main(){
    int n;
    scanf("%d",&n);
    const double high = floor(sqrt(n));
    for(int i = 2;i <= high;i++) {
        if(n % i == 0) {
            printf("%d",n/i);
            break;
        }
        if(i > 2) i++;
    }
    return 0;
}
