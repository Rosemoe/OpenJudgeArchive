#include<cstdio>
#include<cstring>
int main() {
    char a[101], b[101];
    gets(a);
    int len = strlen(a), i = 0;
    for (int j = 0; j < len; j++) {
        switch (a[j]) {
        case '#':
            i = (i == 0) ? 0 : (i - 1);
            break;
        case '@':
            i = 0;
            break;
        default:
            b[i++] = a[j];
        }
    }
    for (int j = 0; j < i; j++)
        putchar(b[j]);
    return 0;
}
