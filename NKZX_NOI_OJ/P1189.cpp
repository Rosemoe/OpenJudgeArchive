#include<cstdio>
bool v[100][100];
const int dx[4] = {0,0,1,-1}, dy[4] = {1,-1,0,0};
int n,m;
int calc(int i,int j) {
    int count = 0;
    if(v[i][j]) {
        v[i][j] = 0;
        count++;
        for(int k = 0;k < 4;k++) {
            int x = i + dx[k];
            int y = j + dy[k];
            if(x >= 0 && y >= 0 && y < m && x < n) {
                count = count + calc(x,y);
            }
        }
    }
    return count;
}
int main(){
    int c;
    int max = 0,ans;
    scanf("%d%d",&n,&m);
    for(int i = 0;i < n;i++) {
        for(int j = 0;j < m;j++) {
            scanf("%d",&c);
            v[i][j] = c;
        }
    }
    for(int i = 0;i < n;i++) {
        for(int j = 0;j < m;j++) {
            if(v[i][j]) {
                ans = calc(i,j);
                if(ans > max)
                    max = ans;
            }
        }
    }
    printf("%d",max);
    return 0;
}
