#include<stdio.h>
int main(){
    int h;
    char sign[10];
    scanf("%d %s",&h,sign);
    if(sign[0] == 'm'){
        printf("%lld",h*60ll);
    }else{
        printf("%lld",h*60ll*60ll);
    }
    return 0;
} 
