#include<stdio.h>
int main(){
    const char set[10][8] = {"","Mon","Tues","Wed","Thurs","Fri","Sat","Sun"};
    int d = getchar() - '0';
    printf("%s",set[d]);
    return 0;
} 
