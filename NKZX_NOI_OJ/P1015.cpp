#include<cstdio>
int main(){
	char c;
	scanf("%c",&c);
	if((c>='w'&&c<='z')||(c>='W'&&c<='Z'))
		c=c+4-26;
	else
		c=c+4;
	printf("%c",c);
	return 0;
}
