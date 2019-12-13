#include <cstdio>
int main() {
	double a[4];
	for(int i = 0;i < 4;i++) scanf("%lf",&a[i]);
	if(a[0] == a[1] && a[2] == a[3] && a[0] > 0 && a[2] > 0){
		printf("%.2f",a[0] * a[2]);
	}else if(a[0] == a[2] && a[1] == a[3] && a[0] > 0 && a[3] > 0){
		printf("%.2f",a[0] * a[1]);
	}else if(a[0] == a[3] && a[1] == a[2] && a[1] > 0 && a[3] > 0){
		printf("%.2f",a[0] * a[1]);
	}else{
		puts("Can not!");
	}
	return 0;
}
