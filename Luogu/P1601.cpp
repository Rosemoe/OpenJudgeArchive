#include<cstdio>
#include<cstring>
#define max(a,b) (a > b ? a : b)
char a[510],b[510],la,lb;
int main() {
	scanf("%s%s",a,b);
	la = strlen(a),lb = strlen(b);
	for(int i = 0;i < max(la,lb);i++){
		if(i < la){
			a[i] -= '0';
		}
		if(i < lb){
			b[i] -= '0';
		}
	}
	for(int i = 0,j = la - 1;i < j;i++,j--){
		char tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
	for(int i = 0,j = lb - 1;i < j;i++,j--){
		char tmp = b[i];
		b[i] = b[j];
		b[j] = tmp;
	}
	int len = max(la,lb);
	for(int i = 0;i < max(la,lb);i++){
		a[i] = a[i] + b[i];
		if(a[i] > 9){
			a[i + 1] += a[i] / 10;
			a[i] %= 10;
			if(i + 1 >= max(la,lb)){
				len = i + 2;
			}
		}
	}
	for(int i = len - 1;i >= 0;i--){
		putchar('0' + a[i]);
	}
    return 0;
}
