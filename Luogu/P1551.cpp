#include <cstdio>
#include <map>
std::map<int, int> trans;
#define nextChar() getchar()
int arr[10100], rank[10100], n, m, p, alloc;
int id(int x) {
	int i = trans[x];
	if (i == 0) {
		i = trans[x] = ++ alloc;
		arr[alloc] = alloc;
	}
	return i;
}
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
	n = read();m = read();p = read();
	int x,y;
	for (int i = 0;i < m;i++) {
		x = read();y = read();
		merge(id(x), id(y));
	}
	for (int i = 0;i < p;i++) {
		if (find(id(read())) == find(id(read()))) {
			puts("Yes");
		} else {
			puts("No");
		}
	}
	return 0;
} 
