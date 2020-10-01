#include<cstdio>
#include<cstring>
int a,b,c,m;
bool usage[10];
int main() {
	scanf("%d%d%d",&a,&b,&c);
	for(int i = 100;i < 999;i++) {
		for(int j = i;j < 999;j++) {
			if(i * b == j * a) {
				double k = (double)i * c / a;
				if((int)k == k && k < 1000) {
					memset(usage,0,sizeof(usage));
					int l;
					l = i;
					while(l) {
						usage[l%10] = 1;
						l /= 10;
					}
					l = j;
					while(l) {
						usage[l%10] = 1;
						l /= 10;
					}
					l = k;
					while(l) {
						usage[l%10] = 1;
						l /= 10;
					}
					bool pass = 1;
					for(int i = 1;i < 10;i++) {
						if(!usage[i]) {
							pass = 0;
							break;
						}
					}
					if(pass) {
						m = 1;
						printf("%d %d %.0f\n",i,j,k);
					}
				}
			}
		}
	}
	if(!m) {
		puts("No!!!");
	}
	return 0;
}
