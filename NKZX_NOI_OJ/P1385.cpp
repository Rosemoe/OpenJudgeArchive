#include<cstdio>
int main(){
    int m,n,s=0;
    scanf("%d%d",&m,&n);
    for(int i = m;i <= n;i++){
        if(i % 17 == 0){
            s += i;
        }
    }
    printf("%d",s);
    return 0;
}
