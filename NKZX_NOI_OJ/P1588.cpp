#include<cstdio>
#include<queue>
#include<vector>
using namespace std;
priority_queue<int,vector<int>,greater<int> > q;
int main() {
    int n;
    scanf("%d",&n);
    int cost = 0;
    int a;
    for(int i = 0;i < n;i++) {
        scanf("%d",&a);
        q.push(a);
    }
    for(int i = 1;i < n;i++) {
        a = q.top();q.pop();
        int b = q.top();q.pop();
        cost += a + b;
        q.push(a + b);
    }
    printf("%d",cost);
    return 0;
}
