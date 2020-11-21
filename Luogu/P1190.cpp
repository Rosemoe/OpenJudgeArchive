#include <iostream>
#include <cstring>
#include <cstdio>
#include <vector>
#include <queue>
using namespace std;
unsigned long long a[10005], x = 0, ans = 0;
priority_queue<int, vector<int>, greater<int> > pq;
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        pq.push(a[i]);
    }
    while (pq.size() > 1) {
        unsigned long long x = pq.top();
        pq.pop();
        x += pq.top();
        pq.pop();
        ans += x;
        pq.push(x);
    }
    cout << ans << endl;
    return 0;
}
