#include<cstdio>
int main(){
	int last,curr,len = 1,maxlen = 1,n;
	scanf("%d %d",&n,&last);
	for(int i = 0;i < n - 1;i++){
		scanf("%d",&curr);
		if(curr == last+1){
			len++;
			if(len > maxlen)
				maxlen = len;
		}else{
			len = 1;
		}
		last = curr;
	}
	printf("%d",maxlen);
	return 0;
}
