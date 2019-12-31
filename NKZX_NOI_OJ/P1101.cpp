#include<cstdio>
#include<algorithm>
int a[1000100],n,m;
long long calc(int height) {
	long long sum = 0;
	int i = n;
	while(a[i] > height && i > 0) {
		sum = sum + a[i] - height;
		i--;
	}
	return sum;
}
int main(){
	scanf("%d%d",&n,&m);
	for(int i = 1;i <= n;i++)
		scanf("%d",&a[i]);
	std::sort(a + 1,a + 1 + n);
	int left = 0,right = a[n],mid = 0;
	while(left <= right) {
		mid = (left + right) >> 1;
		long long h = calc(mid);
		if(calc(mid) == m) {
			right = mid;
			break;
		}else if(calc(mid) < m) {
			right = mid - 1;
		}else {
			left = mid + 1;
		}
	}
	printf("%d",right);
    return 0;
}
