#include<cstdio>
int main(){
	int n,pre,curr,cm=0,m=0;
	scanf("%d%d",&n,&pre);
	for(int i=0;i<n-1;i++){
		scanf("%d",&curr);
		if(curr>pre) cm=cm==0?2:cm+1;
		else cm=0;
		m=cm>m?cm:m;
		pre=curr;
	}
	printf("%d",m);
    return 0;
}
