#include<stdio.h>
int main(){
    const int dd[13] = {0,31,0,31,30,31,30,31,31,30,31,30,31};
    int y,m;
    scanf("%d%d",&y,&m);
    if(m!=2){
        printf("%d",dd[m]);
    }else{
        if((y%100!=0&&y%4==0)||(y%100==0&&y%400==0)){
            puts("29");
        }else{
            puts("28");
        }
    }
    return 0;
} 
