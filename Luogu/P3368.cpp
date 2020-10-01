#include <cstdio>
int arr[500100], n, m;
inline int lowbit(int x) {
	return x & (-x);
}
int getSum(int index) {
	int sum = 0;
	while (index >= 1) {
		sum += arr[index];
		index -= lowbit(index);
	}
	return sum;
}
int addAt(int index, int delta) {
	while (index <= n) {
		arr[index] += delta;
		index += lowbit(index);
	}
}
int main() {
	scanf("%d%d", &n, &m);
	int buffer;
	for (int i = 1;i <= n;i++) {
		scanf("%d", &buffer);
		addAt(i, buffer);
		addAt(i + 1, -buffer);
	} 
	int a,x,y,k;
	for(int i = 0;i < m;i++) {
		scanf("%d%d", &a, &x);
		if (a == 1) {
			scanf("%d%d", &y, &k);
			addAt(x, k);
			addAt(y + 1, -k);
		} else {
			printf("%d\n", getSum(x));
		}
	}
	return 0;
} 
