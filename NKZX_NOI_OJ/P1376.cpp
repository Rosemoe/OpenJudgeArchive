#include<cstdio>
int main(){
    int n,s=1;
    scanf("%d",&n);
    for(int i = 0;i < n;i++){
        for(int j = 0;j <= i;j++)
            putchar('0' + (s++)%10 );
        putchar('\n');
    }
    return 0;
}
