#include<cstdio>
struct J{
    char label[12];
    int way;
}p[100005];
int n,m,a,b,cur;
inline void shift(int s,int l){
    int d = - s * p[cur].way;
    cur += d * l; 
    if(cur < 1){
        cur = n + cur;
    }else if(cur > n){
        cur = cur - n;
    }
}
int main(){
    scanf("%d%d",&n,&m);
    for(int i = 1;i <= n;i++){
        scanf("%d %s",&p[i].way,p[i].label);
        if(p[i].way == 0){
            p[i].way = -1;
        }
    }
    cur = 1;
    for(int i = 1;i <= m;i++){
        scanf("%d%d",&a,&b);
        if(a == 0){
            a = -1;
        }
        shift(a,b);
    }
    printf("%s",p[cur].label);
    return 0;
}
