#include<cstdio>
int main(){
	int dest[10] = {},num = 0,count = 0;
	for(int i = 0;i < 10;i++){
		scanf("%d",&num);
		dest[i] = num % 42;
		count++;
		for(int x = 0;x < i;x++)
			if(dest[x]==dest[i]){
				count--;break;
			}
	}
	printf("%d",count);
	return 0;
}
