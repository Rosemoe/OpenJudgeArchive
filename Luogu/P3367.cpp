#include <cstdio>
int arr[500100], rank[500100], n, m;
int find(int a) {
	return arr[a] = (arr[a] == a ? a : find(arr[a]));
}
void merge(int a, int b) {
	int x = find(a), y = find(b);
	if (rank[x] > rank[y]) {
		arr[y] = x;
	} else {
		arr[x] = y;
		if (rank[x] == rank[y]) {
			rank[y] ++;
		}
	}
}
#define BUFFER_SIZE 65536*2
char buffer[BUFFER_SIZE + 64];
int pointer;
int count;
char nextChar() {
	if (pointer == count) {
		count = fread(buffer, sizeof(char), BUFFER_SIZE, stdin);
		pointer = 0;
	}
	return pointer == count ? EOF : buffer[pointer++];
}
inline int read() {
	register char ch;
	ch = nextChar();
	int result = 0;
	while(ch < '0' || ch > '9') ch = nextChar();
	while(ch >= '0' && ch <= '9') {
		result = (result << 3) + (result << 1) + (ch - '0');
		ch = nextChar();
	}
	return result;
}
int main() {
	n = read();m = read();
	for (int i = 1;i <= n;i++) {
		arr[i] = i;
	}
	int a,x,y;
	for (int i = 0;i < m;i++) {
		a = read();x = read();y = read();
		if (a == 1) {
			merge(x, y);
		} else {
			putchar(find(x) == find(y) ? 'Y' : 'N');
			putchar('\n');
		}
	}
	return 0;
} 
