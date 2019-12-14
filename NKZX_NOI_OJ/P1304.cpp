#include<cstdio>
int main(){
    int n;
    scanf("%d",&n);
    if((n % 100 != 0 && n % 4 == 0) || (n % 100 == 0 && n % 400 == 0) || (n % 3200 == 0 && n % 172800 == 0)){
        puts("YES");
    }else{
        puts("NO");
    }
    return 0;
}
