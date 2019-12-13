#include<cstdio>
long long q[1000005];
int main(){
    int n,v2=1,v3=1,t=2;
    scanf("%lld %d",&q[1],&n);
    for(int i = 1;i <= n;i++){
        long long a = q[v2] * 2 + 1,b = q[v3] * 3 + 1;
        if(a < b){
            v2++;
            q[t] = a;
        }else if(a > b){
            v3++;
            q[t] = b;
        }else{
            v2++;
            v3++;
            q[t] = a;
        }
        t++;
    }
    printf("%lld",q[n]);
    return 0;
} 
