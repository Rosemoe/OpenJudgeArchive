#include<cstdio>
const int cost[10] = {6,2,5,5,4,5,6,3,7,6};
const int M = 100001;
int cache[M];
int count(int n) {
    if(n == 0) return cost[0];
    if(n < M && cache[n] != 0)
        return cache[n];
    int x = 0;
    while(n) {
        x += cost[n % 10];
        n /= 10;
    }
    if(n < M && cache[n] != 0)
        cache[n] = x;
    return x;
}
int main(){
    int n,max,k = 0;
    scanf("%d",&n);
    n -= 4;
    max = 1 << (n / 2 + 2);
    for(int sum = max;sum >= 0;sum--) {
        int r = n - count(sum);
        int l = 0;
        if(r < 2) {
            continue;
        }
        for(int i = 0;i <= sum;i++){
            if(i == sum - i || i == sum - i + 2) {
                l = l * 2;
                if(i == sum - i && count(i) + count(sum - i) == r)
                    l++;
                break;
            }
            if(count(i) + count(sum - i) == r)
                l++;
        }
        k += l;
    }
    printf("%d",k);
    return 0;
}
