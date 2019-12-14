#include<cstdio>
int main(){
    int n;
    scanf("%d",&n);
    for(int i = 0;i <= n;i++){
        for(int j = 0;j < i;j++){
            printf("     ");
        }
        for(int k = 1;k <= n - i;k++){
            printf("%5d",k);
        }
        putchar('\n');
    }
    return 0;
}
