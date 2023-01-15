#include<cstdio>
#include<cstring>

char a[2010], b[2010];
int dis[2010][2010];

int min(int a, int b, int c) {
    if (b < a) {
        a = b;
    }
    if (c < a) {
        a = c;
    }
    return a;
}

int main() {
    scanf("%s%s", a, b);
    int la = strlen(a), lb = strlen(b);
    for (int i = 1; i <= lb; i++) {
        dis[0][i] = i;
    }
    for (int i = 1; i <= la; i++) {
        dis[i][0] = i;
    }
    for (int i = 1; i <= la; i++) {
        for (int j = 1; j <= lb; j++) {
            if (a[i - 1] == b[j - 1]) {
                dis[i][j] = min(dis[i - 1][j] + 1, dis[i][j - 1] + 1, dis[i - 1][j - 1]);
            } else {
                dis[i][j] = min(dis[i - 1][j] + 1, dis[i][j - 1] + 1, dis[i - 1][j - 1] + 1);
            }
        }
    }
    printf("%d", dis[la][lb]);
    return 0;
}
