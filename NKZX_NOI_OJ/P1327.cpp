#include<cstdio>
int n;
char cs[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
char* parse(int i){
    char* str = new char[5];
    for(int k=0;k<5;k++){
        str[k] = '\0';
    }
    int j = 0;
    if(i == 0){
        str[0] = '0';
    }
    while(i > 0){
        str[j] = cs[i % n];
        i = i / n;
        j++;
    }
    for(int k=0;k<j/2;k++){
        char c = str[k];
        str[k] = str[j - 1 - k];
        str[j -1 - k] = c;
    }
    return str;
}
int main(){
    scanf("%d",&n);
    printf("*");
    for(int i = 0;i < n;i++){
        printf("%4s",parse(i));
    }
    putchar('\n');
    for(int i = 0;i < n;i++){
        printf("%s",parse(i));
        for(int j = 0;j <= i;j++){
            printf("%4s",parse(i * j));
        }
        putchar('\n');
    }
}
