#include<cstdio>
int main(){
	int n,data=1,i=1;
	scanf("%d",&n);
	while(true){
		if(data <= n){
			printf("%d ",data);
			i++;
			data = i * i;
		}else{
			break;
		}
	}
	return 0;
}
