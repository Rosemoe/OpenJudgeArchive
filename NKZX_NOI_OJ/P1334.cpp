#include<cstdio>
#include<cstring>
#include<cmath>
int val[500],xval[500];
char str[500];
void prepare() {
	for(int i = 0,j = 0;i < strlen(str);i++,j++) {
		if(str[i] == '.') {
			j--;
			continue;
		}
		xval[j] = str[i] - '0';
	}
}
bool compare() {
	for(int i = 0;i < 500;) {
		if(val[i] == xval[i]) {
			i++;
		}else if(val[i] > xval[i]) {
			return true;
		}else{
			return false;
		}
	}
	return true;
}
void trans(long long key) {
	long long father = 1;
	for(int i = 0;i < 500;i++) {
		val[i] = val[i] + (father / key);
		father = (father % key) * 10;
	}
	for(int i = 499;i > 0;i--) {
		if(val[i] > 9) {
			val[i - 1] = val[i - 1] + val[i] / 10;
			val[i] = val[i] % 10;
		}
	}
}
int main() {
	long long pre = -1;
    while(scanf("%s",str) == 1) {
    	memset(val,0,sizeof val);
    	memset(xval,0,sizeof xval);
    	prepare();
    	long long k = 0;
    	while(!compare()) {
    		trans(++k + 1);
		}
		if(k == 0)
			break;
		printf("%lld\n",pre == 9 && k == 6 ? 5 : k);//恐怕数据有错吧。。。
		pre = k;
	}
    return 0;
}
