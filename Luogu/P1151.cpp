#include<cstdio>
int main(){
	bool printed = false;
	int k = 1;
	scanf("%d",&k);
	for(int i=10000;i<=30000;i++){
		int cache = i,dest[5]={};
		for(int x = 4; x > -1;x--){
			dest[x] = cache % 10;
			cache /= 10;
		}
		bool flag = true;
		for(int x = 0;x < 3;x++){
			int sub = dest[x] * 100 + dest[x+1] * 10 + dest[x+2];
			if(sub % k != 0) flag = false;
		}
		if(flag){
			printf("%d\n",i);
			printed = true;
		}
	}
	if(!printed)
		printf("No");
	return 0;
}
