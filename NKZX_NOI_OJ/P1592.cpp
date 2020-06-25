#include<cstdio> 
#include<cstring>
#define N 50100
#define M 33000
int tArr[M],left[N],right[N],raw[N],n;
 
inline int lowbit(const int value) {
    return value & (-value);
}
 
void increase(int position) {
    for(int i = position;i < M;i += lowbit(i)) {
        tArr[i]++;
    }
}
 
int get(int position) {
    int res = 0;
    while(position > 0) {
        res += tArr[position];
        position -= lowbit(position);
    }
    return res;
}
 
int main() {
    scanf("%d",&n);
    for(int i = 0;i < n;i++) {
        scanf("%d",&raw[i]);
        left[i] = get(raw[i]);
        increase(raw[i] + 1);
    }
    memset(tArr,0,sizeof(tArr));
    for(int i = n - 1;i >= 0;i--) {
        right[i] = get(raw[i]);
        increase(raw[i] + 1);
    }
    long long res = 0;
    for(int i = 0;i < n;i++) {
        res += (long long)left[i] * right[i];
    }
    printf("%lld", res);
    return 0;
}
