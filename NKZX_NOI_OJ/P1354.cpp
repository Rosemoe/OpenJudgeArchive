#include<cstdio>
int main(){
    int a,b,d;char c;
    scanf("%d %d %c",&a,&b,&c);
    switch(c){
        case '+':
            d=a+b;break;
        case '-':
            d=a-b;break;
        case '*':
            d=a*b;break;
        case '/':
            if(b==0){
                puts("Divided by zero");
                return 0;
            }
            d=a/b;break;
        default:
            puts("Invalid operator");
            return 0;
    }
    printf("%d",d);
    return 0;
}
