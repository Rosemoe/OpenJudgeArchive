#include<cstdio>
int x[110];
int main() {
	int t, n;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		int sum = 0;
		bool mult = 0;
		for (int i = 0;i < n;i++) {
			scanf("%d", &x[i]);
			if (sum - x[i] >= 0 && x[i] != 0) {
				mult = 1;
			}
			sum += x[i];
		}
		if (mult) {
			puts("-1");
		} else {
			sum = 0;
			for (int i = 0;i < n;i++) {
				sum += x[i];
				printf(" %d" + (i == 0), sum);
			}
			putchar('\n');
		}
	}
	return 0;
}
