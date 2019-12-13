#include<cstdio>
int main() {
	int a;
	double b=1;
	scanf("%d",&a);
	for(int i=2; i<=a; i++) {
		b*=i;
	}
	printf("%.0f",b);
	return 0;
}
