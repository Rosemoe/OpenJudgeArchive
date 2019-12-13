#include<cstdio>
int m[1001];
int main(){
    int n,c;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&c);
        m[c]++;
    }
    for(int i=0;i<1001;i++){
        for(int v=0;v<m[i];v++){
            printf("%d\n",i);
        }
    }
    return 0;
}
