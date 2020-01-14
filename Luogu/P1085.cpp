#include<cstdio>
int main(){
	int max = 0;
	int day = 0;
	int a,b;
	for(int i = 1;i <= 7;i++){
		scanf("%d%d",&a,&b);
		if(a+b > 8 && a + b > max){
			max = a + b;
			day = i;
		}
	}
	printf("%d",day);
	return 0;
}
