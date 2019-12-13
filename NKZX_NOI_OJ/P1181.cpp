#include<cstdio>
int check(int v){
    int u[5],len=0;
    while(v){
        u[len++]=v%10;
        v/=10;
    }
    int i=0,j=len-1;
    while(i<=j)
        if(u[i++]!=u[j--])
            return 0;
    return 1;
}
int main(){
    int n,c=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        c+=check(i);
    }
    printf("%d",c);
    return 0;
}
