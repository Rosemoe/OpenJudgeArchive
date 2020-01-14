#include<cstdio>
int main(){
    int ans = 0;
    for(int i = 1;i <= 20;i++)
        for(int j = 1;j <= 50;j++)
            if(i + j + (100 - 5 * i - 2 * j) == 50 && (100 - 5 * i - 2 * j) > 0){
                printf("%d %d %d\n",i,j,(100 - 5 * i - 2 * j));
                ans++;
            }
    printf("%d",ans);
    return 0;
}
