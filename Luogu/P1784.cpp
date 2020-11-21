#include<cstdio>
#include<cstring>
int mtx[9][9];
char buffer[128];
int ptr[90][2];
int cnt,flag;
void print() {
	for (int i = 0;i < 9;i++) {
		for (int j = 0;j < 9;j++) {
			printf("%d ", mtx[i][j]);
		}
		putchar('\n');
	}
}
void dfs(int layer) {
	if (layer == cnt) {
		print();
		flag = 0;
		return;
	}
	int x = ptr[layer][0], y = ptr[layer][1];
	bool used[10] = {};
	for (int i = 0;i < 9;i++) {
		used[mtx[i][y]] = 1;
		used[mtx[x][i]] = 1;
	}
	int mtxX = x / 3 * 3;
	int mtxY = y / 3 * 3;
	for (int i = 0;i < 3;i++) {
		for (int j = 0;j < 3;j++) {
			used[mtx[mtxX + i][mtxY + j]] = 1;
		}
	}
	for (int i = 1;i <= 9 && flag;i++) {
		if (!used[i]) {
			mtx[x][y] = i;
			dfs(layer + 1);
		}
	}
	mtx[x][y] = 0;
}
void doJob() {
	cnt = 0;
	flag = 1;
	for (int i = 0;i < 9;i++) {
		for (int j = 0;j < 9;j++) {
			scanf("%d", &mtx[i][j]);
			if (mtx[i][j] == 0) {
				ptr[cnt][0] = i;
				ptr[cnt][1] = j;
				cnt++;
			}
		}
	}
	dfs(0);
	putchar('\n');
}
int main() {
	doJob();
	return 0;
}
