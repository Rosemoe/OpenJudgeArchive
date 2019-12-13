#include <cstdio>
int x[4] = {0,2,3,1};
int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    if (a == b) puts("tie");
    else if (x[a] == b) puts("win");
    else puts("lose");
    return 0;
}
