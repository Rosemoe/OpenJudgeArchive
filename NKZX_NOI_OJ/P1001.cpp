#include<cstdio>
int main(){
	short l = 0;
	char c;
	while(scanf("%c",&c) != -1){
		if(c == '\n'){
			break;
		}else if(c != ' '){
			l++;
		}
	}
	printf("%d",l);
	return 0;
}
