#include<cstdio>
#include<cctype>
int main() {
	int n = 0,i;
	char str[1000];
	while(scanf("%s",str) == 1) {
		i = 0;
		n++;
		while(str[i] != '\0') {
			if(!isalpha(str[i]) && i - 1 >= 0 && isalpha(str[i - 1])) {
				n++;
			}
			i++;
		}
		if(i - 1 >= 0 && !isalpha(str[i - 1])) n--;
	}
	printf("%d",n);
	return 0;
}
