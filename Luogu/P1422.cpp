#include<cstdio>
int main(){
	int count = 0;
	double fee = 0;
	scanf("%d",&count);
	if(count > 150){
		fee += 150 * 0.4463;
		if(count > 400){
			fee += 250 * 0.4663;
			fee += (count - 400) * 0.5663;
		}else{
			fee += (count - 150) * 0.4663;
		}
	}else{
		fee += 0.4463 * count;
	}
	printf("%0.1f",fee);
	return 0;
}
