#include<cstdio>
#include<cstring>
int digit(char a[1000],int k) {
	int b=strlen(a);
	b=b;
	b=b-k;
	printf("%c",a[b]);
}
int main() {
	int k;
	char a[1000];
	scanf("%s%d",a,&k);
	digit(a,k);
}
