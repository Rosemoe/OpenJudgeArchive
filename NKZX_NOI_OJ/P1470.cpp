#include<cstdio>
#include<cstring>
char str[1001];
int main(){
    if(scanf("%s",str)!=1)
        return 0;
    char p = str[0];
    int t = 1;
    for(int i = 1;i < strlen(str);i++) {
        if(str[i] != p) {
            putchar(p);
            if(t != 1)
                printf("%d",t);
            p = str[i];
            t = 1;
        }else{
            t++;
        }
    }
    putchar(p);
    if(t != 1)
        printf("%d",t);
    return 0;
} 
