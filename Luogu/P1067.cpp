#include<cstdio>
int main() {
    int n,c,j=0;
    scanf("%d",&n);
    for(int i = n;i >=0;i--){
    	scanf("%d",&c);
    	if(c == 0){
    		continue;
		}
		if(c < 0){
			c = -c;
			putchar('-');
		}else if(j){
			putchar('+');
		}
		if(i != 0){
			if(i == 1){
				if(c == 1)
					printf("x");
				else
					printf("%dx",c);
			}else if(c != 1)
				printf("%dx^%d",c,i);
			else
				printf("x^%d",i);
		}else{
			printf("%d",c);
		}
		j=1;
	}
    return 0;
}
