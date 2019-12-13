#include<cstdio>  
struct Undo{
	int v;
	int c;
	double m;
}stack[10010];
int main(){
	int v0,c0,n,pos = 0;
	scanf("%d%d%d",&v0,&c0,&n);
	char action[5];
	double v = v0,m = v0 * (c0 * 0.01);
	while(n){
		scanf("%s",action);
		if(action[0] == 'P'){
			pos ++;
			scanf("%d%d",&stack[pos].v,&stack[pos].c);
			stack[pos].m = stack[pos].v * (stack[pos].c * 0.01);
			v = v + stack[pos].v;
			m = m + stack[pos].m;
		}else if(action[0] == 'Z'){
			if(pos != 0){
				v = v - stack[pos].v;
				m = m - stack[pos].m;
				pos--;
			}
		}
		printf("%.0f %.5f\n",v,m/v*100);
		n--;
	}
    return 0;
}
