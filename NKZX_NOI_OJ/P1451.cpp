#include <cstdio>
int main() {
	float a,b,c;
	scanf("%f%f%f",&a,&b,&c);
	if(a + b > c && b + c > a && a + c > b){
		printf("%.2f",a + b + c);
	}else{
		puts("Wrong");
	}
	return 0;
}
