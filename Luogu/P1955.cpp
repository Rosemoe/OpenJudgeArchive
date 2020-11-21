#include <cstdio>
#include <unordered_map>
std::unordered_map<int, int> transfer;
int allocated;
int father[2000100];
int find(int a) { return father[a] = (father[a] == a ? a : find(father[a])); }
void mergeDirectly(int a, int b) { father[a] = father[b]; }
int point(int x) {
    int target = transfer[x];
    if (target != 0) {
        return target;
    }
    transfer[x] = ++allocated;
    father[allocated] = allocated;
    return allocated;
}
int ask[1000100][2];
int count;
int work() {
    allocated = 0;
    count = 0;
    transfer.clear();
    int t;
    scanf("%d", &t);
    int x1, x2, e;
    for (int i = 0; i < t; i++) {
        scanf("%d%d%d", &x1, &x2, &e);
        if (e == 1) {
            int a = find(point(x1)), b = find(point(x2));
            mergeDirectly(a, b);
        } else {
            ask[count][0] = x1;
            ask[count][1] = x2;
            count++;
        }
    }
    for (int i = 0; i < count; i++) {
        if (find(point(ask[i][0])) == find(point(ask[i][1]))) {
            puts("NO");
            return 0;
        }
    }
    puts("YES");
    return 0;
}
int main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        work();
    }
    return 0;
}
