#include<vector> 
#include<queue>
#include<cstdio>
using namespace std;
priority_queue<int, vector<int>, greater<int> > heap;
int main() {
	int n,q;
	scanf("%d", &n);
	for (int i = 0;i < n;i++) {
		scanf("%d", &q);
		if (q == 1) {
			scanf("%d", &q);
			heap.push(q);
		} else if (q == 2) {
			printf("%d\n", heap.top());
		} else {
			heap.pop();
		}
	}
	return 0;
}
