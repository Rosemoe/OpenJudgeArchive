#include<cstdio>
int f[4001][2],n;
int main() {
    for(int i = 1;;i++){
        int c = scanf("%d",&f[i][0]);
        if(c != 1 || f[i][0] < 0){
            break;
        }
        n++;
    }
    f[1][1] = 1;
    for(int i = 2;i <= n;i++){
        for(int j = 1;j < i;j++){
            if(f[j][0] >= f[i][0] && f[j][1] + 1 > f[i][1]){
                f[i][1] = f[j][1] + 1;
            }
        }
        if(f[i][1] == 0){
            f[i][1] = 1;
        }
    }
    int max = 0;
    for(int i = 1;i <= n;i++){
        if(f[i][1] > max){
            max = f[i][1];
        }
    }
    printf("%d",max);
    return 0;
}
