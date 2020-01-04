#include<cstdio>
int main(){
    int n,c,s = 0;
    scanf("%d",&n);
    while(n--) {
        scanf("%d",&c);
        if(c == 90) s++;
    }
    printf("%d",s);
    return 0;
}
