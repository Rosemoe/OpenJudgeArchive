#include<cstdio>
int move(int n){
    if(n==1) return 1;
    if(n==2) return 2;
    return move(n-1)+move(n-2);
}
int main(){
    int n;scanf("%d",&n);
    printf("%d",move(n));
    return 0;
}
