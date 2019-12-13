#include<stdio.h>
#include<string.h>
int main(){
    int len,sum=0;
    char str[1025];
    for(int i = 0;i < 4;i++){
        scanf("%s",str);
        len = strlen(str);
        sum = sum + len;
        printf("%d ",len);
    }
    printf("%d",sum);
    return 0;
} 
