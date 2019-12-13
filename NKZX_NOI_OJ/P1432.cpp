#include<stdio.h>
int main(){
    const char set[10][10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    int d = getchar() - '0';
    printf("%s",set[d]);
    return 0;
} 
