#include<cstdio>
int res[10];
const int M = 1000000;
int main(){
    int n,ml = 0,l;
    res[0] = 1; 
    scanf("%d",&n);
    for(int i = 0;i < n + 1;i++){
        for(int j = 0;j <= ml;j++){
            res[j] *= 2;
        }
        for(int j = 0;j <= ml;j++){
            if(res[j] >= M){
                res[j + 1] += res[j] /  M;
                res[j] %= M;
                if(j + 1 > ml){
                    ml = j + 1;
                }
            }
        }
    }
    res[0] -= 2;
    l = ml;
    while(l >= 0){
        printf(l != ml ? "%06d" : "%d",res[l]);
        l--;
    }
    return 0;
}
