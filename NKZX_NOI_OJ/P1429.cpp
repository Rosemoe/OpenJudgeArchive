#include<cstdio>  
struct Undo{
    int v;
    double m;
}stack[10010];
inline int nextInt(){
	register char c = '?';
	int r = 0;
	while(c > '9' || c < '0') c = getchar();
	while(c >= '0' && c <= '9') r = (r << 3) + (r << 1) + (c - '0'),c = getchar();
	return r;
}
int main(){
    int v0,c0,n,pos = 0,c;
    scanf("%d%d%d",&v0,&c0,&n);
    char action[5];
    double v = v0,m = v0 * (c0 * 0.01);
    while(n){
        scanf("%s",action);
        if(action[0] == 'P'){
            pos++;
            stack[pos].v = nextInt();
			c = nextInt();
            stack[pos].m = stack[pos].v * (c * 0.01);
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
