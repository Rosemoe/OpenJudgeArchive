#include<cstdio>
int a[100],c;
int pow(int under,int time){
	int r = 1;
	while(time){
		r *= under;
		time--;
	}
	return r;
}
int unit(int n){
	int r = 0;
	while(n){
		n/=10;
		r++;
	}
	return r;
}
int main(){
	for(int i = 100;i <= 9999999;i++){
		int u = unit(i);
		int p = i;
		int s = 0;
		while(p){
			s += pow(p % 10,u);
			p /= 10;
		}
		if(s == i){
			a[c++] = i;
		}
	}
	printf("%d\n",c);
	for(int i = 0;i < c;i++){
		printf("%d ",a[i]);
	}
    return 0;
}
