#include<cstdio>
char m[4][5];
int step = 16;
const int shift[5][2] = {
    {0,0},
    {1,0},
    {-1,0},
    {0,1},
    {0,-1}
};
bool checkIndex(int i, int j) {
    return i >= 0 && j >= 0 && i < 4 && j < 4;
}
bool check() {
    int b = 0, w = 0;
    for (int i = 0;i < 4;i++) {
        for (int j = 0;j < 4;j++) {
            if (m[i][j] == 'b') {
                b++;
            } else {
                w++;
            }
        }
    }
    return b == 16 || w == 16;
}
void reverse(int i, int j) {
    m[i][j] = m[i][j] == 'b' ? 'w' : 'b';
}
void search(int depth, int curr) {
    if (check() && curr < step) {
        step = curr;
    }
    if (depth == 16) {
        return;
    }
    search(depth + 1, curr);
    int i = depth / 4;
    int j = depth % 4;
    for (int k = 0;k < 5;k++) {
        if (checkIndex(i + shift[k][0], j + shift[k][1])) {
            reverse(i + shift[k][0], j + shift[k][1]);
        }
    }
    search(depth + 1, curr + 1);
    for (int k = 0;k < 5;k++) {
        if (checkIndex(i + shift[k][0], j + shift[k][1])) {
            reverse(i + shift[k][0], j + shift[k][1]);
        }
    }
}
int main() {
    scanf("%s%s%s%s", m[0], m[1], m[2], m[3]);
    search(0, 0);
    if (step == 16) {
        puts("Impossible");
    } else {
        printf("%d", step);
    }
    return 0;
}
