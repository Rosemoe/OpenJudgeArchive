#include<cstdio>
int main(){
    char c;
    int n = 0;
    while((c = getchar()) != '@'){
        if(c == '('){
            n++;
        }else if(c == ')'){
            n--;
            if(n < 0){
                puts("NO");
                return 0;
            }
        }
    }
    puts(n == 0 ? "YES" : "NO");
    return 0;
}
