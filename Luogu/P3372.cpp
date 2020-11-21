#include<cstdio>
#define N 100100
#define lch(index) k[index * 2]
#define rch(index) k[index * 2 + 1]
#define ll long long
#define isdigit(x) (x >= '0' && x <= '9')
struct Node {
	ll sum;
	ll pending;
	int l,r;
} k[4 * N + 100];
int a[N];
int read() {
	int x=0,f=1;char ch=getchar();
	while (!isdigit(ch)){if (ch=='-') f=-1;ch=getchar();}
	while (isdigit(ch)){x=(x<<3)+(x<<1)+(ch^48);ch=getchar();}
	return x*f;
}
int n;
void build(int index, int left, int right) {
	k[index].l = left;
	k[index].r = right;
	if (left == right) {
		k[index].sum = a[left];
		return;
	}
	int mid = (left + right) / 2;
	build(index * 2, left, mid);
	build(index * 2 + 1, mid + 1, right);
	k[index].sum = k[index * 2].sum + k[index * 2 + 1].sum;
}
void updatePending(int index) {
	if (k[index].pending != 0) {
		lch(index).sum += (lch(index).r - lch(index).l + 1) * k[index].pending;
		rch(index).sum += (rch(index).r - rch(index).l + 1) * k[index].pending;
		k[index * 2].pending += k[index].pending;
		k[index * 2 + 1].pending += k[index].pending;
		k[index].pending = 0;
	}
}
void update(int index, int left, int right, int inc) {
	if (left <= k[index].l && right >= k[index].r) {
		k[index].sum += (long long)(k[index].r - k[index].l + 1) * inc;
		k[index].pending += inc;
		return;
	}
	updatePending(index);
	int mid = lch(index).r;
	if (left <= mid) {
		update(index * 2, left, right, inc);
	}
	if (right > mid) {
		update(index * 2 + 1, left, right, inc);
	}
	k[index].sum = lch(index).sum + rch(index).sum;
}
long long query(int index, int left, int right) {
	if (left <= k[index].l && right >= k[index].r) {
		return k[index].sum;
	}
	updatePending(index);
	int mid = lch(index).r;
	long long res = 0;
	if (left <= mid) {
		res += query(index * 2, left, right);
	}
	if (mid < right) {
		res += query(index * 2 + 1, left, right);
	}
	return res;
}
int main() {
	n = read();
	int m = read();
	for (int i = 1;i <= n;i++) {
		a[i] = read();
	}
	build(1, 1, n);
	int v,l,r,d;
	for (int i = 0;i < m;i++) {
		v = read(),l = read(),r = read();
		if (v == 1) {
			d = read();
			update(1, l, r, d);
		} else {
			printf("%lld\n", query(1, l ,r));
		}
	}
	return 0;
} 
