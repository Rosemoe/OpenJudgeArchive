#include<cstdio>
#include<cstring> 
int main(){
    char s[50];
    while(scanf("%s",s)==1){
    long long c = 0,j = 8;
    for(int i = 2;i < strlen(s);i++){
        c +=  (s[i] - '0');
        j *= 8;
        c *= 8;
    }
    printf("%s [8] = 0.",s);
    while(c != 0){
        c *= 10;
        printf("%d",c / j);
        c = c % j;
    }
    printf(" [10]\n");
    }
    return 0;
} 
