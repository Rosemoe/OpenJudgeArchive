#include<cstdio>
int n,c,min=10000,max=-1;
int main(){
    scanf("%d",&n);
    for(int i = 0;i < n;i++){
        scanf("%d",&c);
        max = max > c ? max : c;
        min = min < c ? min : c;
    }
    printf("%d",max - min);
    return 0;
}
