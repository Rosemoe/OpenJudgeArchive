#include<cstdio>
int read() {
	char c = getchar();
	int r = 0;
	while(c < '0' || c > '9') c = getchar();
	while(c >= '0' && c <= '9') r = (r << 3) + (r << 1) + (c - '0'),c = getchar();
	return r;
}
int main(){
	int n,a,b;
	scanf("%d%d%d",&a,&b,&n);
	int mincost = -1;
	for(int i = 0;i < n;i++) {
		int cost,count,k,p1 = -1,p2 = -1;
		cost = read();
		count = read();
		for(int j = 0;j < count;j++) {
			k = read();
			if(k == a) {
				p1 = j;
			} else if(k == b) {
				p2 = j;
			}
		}
		if(p1 < p2 && p1 != -1 && p2 != -1) {
			if(mincost == -1 || cost < mincost) {
				mincost = cost;
			}
		}
	}
	printf("%d",mincost);
    return 0;
}
