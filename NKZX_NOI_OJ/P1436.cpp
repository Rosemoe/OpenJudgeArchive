#include<stdio.h>
int main(){
    int sec,h,m;
    scanf("%d",&sec); 
    h = sec / 3600;
    sec -= 3600 * h;
    m = sec / 60;
    sec -= 60 * m;
    printf("%d:%d:%d",h,m,sec);
    return 0;
} 
