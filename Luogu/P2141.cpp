#include<cstdio>
int v[110],n,c;
int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&v[i]);
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			for(int k=j+1;k<n;k++)
				if(v[j]+v[k]==v[i])
					i++,c++,j=0,k=1;
	printf("%d",c);
    return 0;
}
