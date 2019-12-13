#include<cstdio>
int n,p,q,f[10];
int max(int a,int b){
    return a > b ? a : b; 
}
inline int nextInt(){
    int n = 0;
    char c = getchar();
    while(c < '0' || c > '9') c = getchar();
    while(c >= '0' && c <= '9') n = n * 10 + c - '0',c = getchar();
    return n;
}
int main() {
    scanf("%d%d%d",&p,&q,&n);
    f[0%3] = p;
    f[1%3] = p - q + nextInt();
    for(int i = 2;i <= n + 1;i++){
        f[i%3] = max(f[(i - 1)%3] - q,f[(i - 2)%3] - q);
        if(f[i%3] < 0){
            printf("NO");
            return 0;
        }
        f[i%3] += i == n + 1 ? 0 : nextInt();
    }
    printf("%d",f[(n + 1)%3]);
    return 0;
}
