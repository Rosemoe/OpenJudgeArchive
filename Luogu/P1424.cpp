#include<cstdio>  
int main(){
    int x,n,c=0;
    scanf("%d%d",&x,&n);
    while(n--){
    	if(x >= 1 && x <= 5) c++;
    	x++;
    	if(x > 7){
    		x = 1;
		}
	}
	printf("%d",250*c);
    return 0;
}
