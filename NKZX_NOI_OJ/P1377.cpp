#include<cstdio>
inline bool g(int s){
    if(s % 7 == 0){
        return true;
    }
    int c = s;
    while(c){
        if(c % 10 == 7){
            return true;
        }
        c = c / 10;
    }
    return false;
}
int main(){
    int n,i=1,c=0;
    scanf("%d",&n);
    for(;i<=n;i++){
        if(g(i)==false){
            c++;
        }
    }
    printf("%d",c);
    return 0;
}
