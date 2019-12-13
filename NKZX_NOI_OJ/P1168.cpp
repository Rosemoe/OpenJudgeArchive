#include<cstdio>
int main(){
    char num[201];
    scanf("%s",num);
    int i=0,sum=0;
    while(num[i] != '\0'){
        sum += num[i++] - '0';
    }
    printf("%d",sum);
    return 0;
}
