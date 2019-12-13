#include<cstdio>
int main(){
    int n,c,m=0,s=0;
    scanf("%d",&n);
    for(int i = 0;i < n;i++){
        scanf("%d",&c);
        if(c > m){
            m = c;
            s++;
        }
    }
    printf("%d",s);
    return 0;
}
