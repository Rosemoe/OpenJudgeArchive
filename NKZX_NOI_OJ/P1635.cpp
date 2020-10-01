#include<cstdio>
#include<vector>
using std::vector;
int n;
int ask[110][3];
inline int getDigit(int t, int p) {
    while (p) {
        t /= 10;
        p--;
    }
    return t % 10;
}
inline bool check1(int a, int b, int c) {
    bool state[10][2] = {};
    for (int i = 0;i < 4;i++) {
        state[getDigit(a, i)][0] = 1;
    }
    int d = 0;
    for (int i = 0;i < 4;i++) {
        int k = getDigit(b ,i);
        if(state[k][0]) {
            if (state[k][1]) {
                if (getDigit(a, i) == k) {
                    d++;
                }
            } else {
                d++;
                state[k][1] = 1;
            }
        }
    }
    return d == c;
}
inline bool check2(int a, int b,int c) {
    int d = 0;
    for (int i = 0;i < 4;i++) {
        d += getDigit(a, i) == getDigit(b, i);
    }
    return d == c;
}
void run() {
    vector<int> candidates;
    for (int i = 1111;i <= 9999;i++) {
        candidates.push_back(i);
    }
    for (int i = 0;i < n;i++) {
        for (int j = 0;j < candidates.size();j++) {
            int value = candidates[j];
            int query = ask[i][0];
            if (!check1(value, query, ask[i][1]) || !check2(value, query, ask[i][2])) {
                candidates.erase(candidates.begin() + j);
                j--;
                continue;
            }
        }
    }
    if (candidates.size() > 1) {
        printf("Not sure\n");
    } else if (candidates.size() == 1){
        printf("%d\n", candidates[0]);
    } else {
        printf("Error\n");
    }
}
int main() {
    while (scanf("%d", &n) == 1 && n != 0) {
        for (int i = 0;i < n;i++) {
            scanf("%d%d%d", &ask[i][0], &ask[i][1], &ask[i][2]);
        }
        run();
    }
    return 0;
}
