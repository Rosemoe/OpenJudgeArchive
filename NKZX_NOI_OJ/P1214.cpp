#include<cstdio>
int f[4001][3],n,max,c;
int main() {
    scanf("%d",&n);
    f[0][2] = 10e8;
    for(int i = 1;i <= n;i++){
        scanf("%d",&f[i][0]);
        int good = 0;
        for(int j = 1;j <= c;j++){
            if(f[j][2] >= f[i][0] && f[j][2] < f[good][2]){
                good = j;
            }
        }
        if(good == 0){
            f[++c][2] = f[i][0];
        }else{
            f[good][2] = f[i][0];
        }
    }
    f[1][1] = 1;
    for(int i = 2;i <= n;i++){
        f[i][1] = 1;
        for(int j = 1;j < i;j++){
            if(f[j][0] >= f[i][0] && f[j][1] + 1 > f[i][1]){
                f[i][1] = f[j][1] + 1;
            }
        }
        if(f[i][1] > max){
            max = f[i][1];
        }
    }
    printf("%d\n%d",max,c);
    return 0;
}
