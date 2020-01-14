#include<cstdio>
struct rect{
	int l,r,t,b;
}p[2000];
int main(){
    int m,n,x,y,t1,t2,j;scanf("%d%d",&m,&n);
    for(int i=0;i<m;i++) scanf("%d%d%d%d",&p[i].l,&p[i].t,&p[i].r,&p[i].b);
	for(int i=0;i<n;i++){
		scanf("%d%d",&x,&y);
		t1=t2=0;
		for(j=0;j<m;j++){
			if(p[j].l<=x&&p[j].t<=y&&p[j].r>=x&&p[j].b>=y){
				t1++;t2=j+1;
			}
		}
		if(t1==0){
			printf("NO\n");
		}else{
			printf("YES %d %d\n",t1,t2);
		}
	}
	return 0;
}
