#include<cstdio>
int m[1000][1000];
inline int max(int a,int b){
    return a > b ? a : b;
}
inline bool isNumber(char c){
    return (c >= '0' && c <= '9');
}
inline int nextInt(){
    char c = getchar();
    int n = 0;
    while(!isNumber(c)) c = getchar();
    while(isNumber(c)) n = n * 10 + c - '0',c = getchar();
    return n;
}
int main(){
    int n = nextInt();
    for(int i = 0;i < n;i++)
        for(int j = 0;j < i + 1;j++)
            m[i][j] = nextInt();
    for(int i = n - 2;i >= 0;i--)
        for(int j = 0;j <= i;j++)
            m[i][j] = max(m[i][j] + m[i + 1][j],m[i][j] + m[i + 1][j + 1]);
    printf("%d",m[0][0]);
    return 0;
}
