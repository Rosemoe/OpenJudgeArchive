#include<cstdio>
#include<cstring>
#define max(a,b) ((a) > (b) ? (a) : (b))
char a[1010],b[1010];
int v[2][1010];
int main() {
    scanf("%s%s",a,b);
    int la = strlen(a),lb = strlen(b);
    for(int i = 1;i <= la;i++) {
        for(int j = 1;j <= lb;j++) {
            if(a[i - 1] == b[j - 1]) {
                v[i%2][j] = v[(i-1)%2][j-1] + 1;
            }else{
                v[i%2][j] = max(v[i%2][j-1],v[(i-1)%2][j]);
            }
        }
    }
    printf("%d",v[la%2][lb]);
    return 0;
}
