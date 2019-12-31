#include<cstdio>
char str[100100];
int v[100100],len;
long long k[100100];
int main(){
	scanf("%d%s",&len,str);
	long long sum = 0;
	for(int i = 0;i < len;i++)
		v[i] = (i != 0 ? v[i - 1] : 0) + (str[i] == 'W' ? 1 : 0);
	for(int i = 0;i < len;i++)
		k[i] = (i != 0 ? k[i - 1] : 0) + (str[i] == 'O' ? v[len - 1] - v[i] : 0);
	for(int i = 0;i < len;i++)
		if(str[i] == 'C') 
			sum = sum + k[len - 1] - k[i];
	printf("%lld",sum);
    return 0;
}
