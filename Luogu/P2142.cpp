#include<cstdio>

short a[10100],b[10100],la,lb;

int read(short arr[]){
	int i = 0;
	char c = getchar();
	while(c < '0' || c > '9'){
		c = getchar();
	}
	while(c >= '0' && c <= '9'){
		if(i != 0 || c != '0')
			arr[i++] = c - '0';
		c = getchar();
	}
	return i;
}

void reverse(short arr[],int len){
	for(int i = 0,j = len - 1;i < j;i++,j--){
		short tmp = arr[i];
		arr[i] = arr[j];
		arr[j] = tmp;
	}
}

int compare(){
	if(la > lb){
		return 1;
	}else if(lb > la){
		return -1;
	}else{
		for(int i = la - 1;i >= 0;i--){
			if(a[i] > b[i]){
				return 1;
			}else if(a[i] < b[i]){
				return -1;
			}
		}
	}
	return 0;
}

void calculate(short na[],short nb[],int ta,int tb){
	for(int i = 0;i < tb;i++){
		na[i] = na[i] - nb[i];
		if(na[i] < 0){
			na[i] += 10;
			na[i + 1] --;
		}
	}
	for(int i = tb;i < ta - 1;i++){
		if(na[i] < 0){
			na[i] += 10;
			na[i + 1]--;
		}else{
			break;
		}
	}
	bool sign = 0;
	for(int i = ta - 1;i >= 0;i--){
		if(sign){
			putchar('0' + na[i]);
		}else{
			if(na[i] != 0){
				putchar('0' + na[i]);
				sign = 1;
			}
		}
	}
}

int main() {
	la = read(a);
	lb = read(b);
	reverse(a,la);
	reverse(b,lb);
	int cmp = compare();
	if(cmp == 0){
		putchar('0');
	}else if(cmp == 1){
		calculate(a,b,la,lb);
	}else{
		putchar('-');
		calculate(b,a,lb,la);
	}
    return 0;
}
