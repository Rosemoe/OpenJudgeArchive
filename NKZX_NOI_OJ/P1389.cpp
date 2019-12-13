#include<cstdio>
int main() {
    int a,b=0,c=0;
    for(int i = 1;i <= 12;i++){
        b += 300;
        scanf("%d",&a);
        if(b < a){
            putchar('-');
            printf("%d",i);
            return 0;
        }else{
            b -= a;
            c += b / 100;
            b %= 100;
        }
    }
    printf("%d",c * 120 + b);
    return 0;
}
