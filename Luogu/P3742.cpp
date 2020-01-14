#include<cstdio>
int main(){
	int len;
	scanf("%d",&len);
	const int final_len = len + 1;
	char a[final_len],b[final_len];
	scanf("%s %s",&a,&b);
	for(int i = 0;i < len;i++){
		if(a[i] < b[i]){
			printf("-1");
			return 0;
		}
	}
	printf("%s",b);
	return 0;
}
