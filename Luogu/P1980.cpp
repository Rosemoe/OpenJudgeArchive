#include<cstdio>
int main() {
	int n,k,s=0,j;
	scanf("%d%d",&n,&k);
    for(int i = 1;i <= n;i++){
    	j=i;
    	while(j){
    		if(j%10 == k) s++;
    		j /= 10;
		}
	}
	printf("%d",s);
    return 0;
}
