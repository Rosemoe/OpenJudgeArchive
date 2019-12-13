#include <cstdio>
int main() {
    int a, b, c = 0, d = 0;
    scanf("%d", &a);
    for (int i = 0; i < a; i++) {
        scanf("%d", &b);
        if (b % 2) c += b;
        else d += b;
    }
    printf("%d\n%d", c, d);
    return 0;
}
