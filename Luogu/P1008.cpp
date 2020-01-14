#include<cstdio>
inline bool test(const int f){
	bool a[10] = {};
	for(int i = 1;i <= 3;i++){
		int j = f * i;
		while(j){
			a[j%10] = 1;
			j /= 10;
		}
	}
	for(int i = 1;i <= 9;i++){
		if(a[i] == 0){
			return 0;
		}
	} 
	return 1;
}
int main() {
    for(int i = 100;i < 1000;i++){
    	if(i * 3 <= 999 && test(i)){
    		printf("%d %d %d\n",i,i*2,i*3);
		}else{
			if(i * 3 > 1000){
				break;
			}
		}
	}
    return 0;
}
