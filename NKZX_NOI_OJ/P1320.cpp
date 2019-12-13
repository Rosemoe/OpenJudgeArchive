#include<cstdio>
int main(){
    char str[1025];
    gets(str);
    int i = 0,lower = 0,upper = 0,num = 0,other = 0;
    for(;;i++){
        char c = str[i];
        if(c == '\0'){
            break;
        }
        if(c >= 'a' && c <= 'z'){
            lower++;
        }else if(c >= 'A' && c <= 'Z'){
            upper++;
        }else if(c >= '0' && c <= '9'){
            num++;
        }else{
            other++;
        }
    }
    printf("%d %d %d %d %d",upper,lower,num,other,i);
    return 0;
}
