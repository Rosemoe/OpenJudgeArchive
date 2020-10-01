#include<cstdio>
#define min(a,b) ((a < b) ? (a) : (b))
char m[4][5];
int step = 16;
struct Step {
    int i,j;
};
Step st[16],fin[16];
bool check() {
    for (int i = 0;i < 4;i++) {
        for (int j = 0;j < 4;j++) {
            if (m[i][j] == '+') {
                return false;
            }
        }
    }
    return true;
}
inline void reverse(int i, int j) {
    m[i][j] = m[i][j] == '+' ? '-' : '+';
}
void search(int depth, int curr) {
    if (depth == 16) {
        if (check() && curr < step) {
            step = curr;
            for (int i = 0;i < curr;i++) {
                fin[i].i = st[i].i;
                fin[i].j = st[i].j;
            }
        }
        return;
    }
    search(depth + 1, curr);
    int i = depth / 4;
    int j = depth % 4;
    reverse(i, j);
    for (int k = 0;k < 4;k++) {
        if (k != j) {
            reverse(i, k);
        }
        if (k != i) {
            reverse(k, j);
        }
    }
    st[curr].i = i;
    st[curr].j = j;
    search(depth + 1, curr + 1);
    reverse(i, j);
    for (int k = 0;k < 4;k++) {
        if (k != j) {
            reverse(i, k);
        }
        if (k != i) {
            reverse(k, j);
        }
    }
}
int main() {
    scanf("%s%s%s%s", m[0], m[1], m[2], m[3]);
    search(0, 0);
    printf("%d\n", step);
    for (int i = 0;i < step;i++) {
        printf("%d %d\n", fin[i].i + 1, fin[i].j + 1);
    }
    return 0;
}
