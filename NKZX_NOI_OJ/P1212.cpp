#include<cstdio>
#include<cmath>
bool p(int n){
    for(int i=2;i<=floor(sqrt(n));i++) if(n%i==0) return 0;
    return 1;
}
int main(){
    int n;scanf("%d",&n);
    int i=3,j=4;
    while(i<=n&&j<=n){
        if(p(i)&&p(j))
            printf("%d %d\n",i,j);
        switch(j-i){
            case 1:j++;break;
            case 2:i++;j=i+1;break;
        }
    }
    return 0;
}
