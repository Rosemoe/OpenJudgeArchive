#include<cstdio>
int stack[101],n,top=0,i,c,m=0;
int main(){
    scanf("%d",&n);
    for(i = 0;i < n;i++){
        scanf("%d",&c);
        while(c > m){
            stack[top++] = ++m;
            putchar('A');
        }
        putchar('B');
        top--;
    }
    return 0;
} 
