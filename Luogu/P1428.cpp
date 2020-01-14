#include<cstdio>
int v[110],n,c;
int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		c=0;
		scanf("%d",&v[i]);
		for(int j=0;j<i;j++)
			if(v[j]<v[i]) c++;
		printf("%d ",c);
	}
    return 0;
}
