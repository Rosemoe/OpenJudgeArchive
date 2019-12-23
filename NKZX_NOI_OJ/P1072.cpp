#include<cstdio>
int n;
struct J{
    int x;
    int y;
}cities[100010];
inline long long max(const long long a,const long long b){
	return (a > b ? a : b);
}
inline long long abs(const long long a){
	return (a > 0 ? a : -a);
}
int main(){
    scanf("%d",&n);
    long long maxcost=0,count=0;
    scanf("%d%d",&cities[1].x,&cities[1].y);
    for(int i=2;i<=n;++i){
        scanf("%d%d",&cities[i].x,&cities[i].y);
        count+=(abs(cities[i].x-cities[i-1].x)+abs(cities[i].y-cities[i-1].y));
    }
    for(int i=2;i<=n-1;i++){
        long long tmp=abs(cities[i].x-cities[i-1].x)+abs(cities[i].y-cities[i-1].y);
        tmp+=abs(cities[i].x-cities[i+1].x)+abs(cities[i].y-cities[i+1].y);
        tmp-=abs(cities[i-1].x-cities[i+1].x)+abs(cities[i-1].y-cities[i+1].y);
        maxcost=max(maxcost,tmp);
    }
    printf("%lld",count-maxcost);
    return 0;
}
