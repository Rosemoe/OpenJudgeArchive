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
	} 
	int a,x,y;
	for(int i = 0;i < m;i++) {
		scanf("%d%d%d", &a, &x, &y);
		if (a == 1) {
			addAt(x, y);
		} else {
			printf("%d\n", getSum(y) - getSum(x - 1));
		}
	}
	return 0;
} 
