#include<cstdio>
int main(){
    char c = getchar();
    if(c>='a'&&c<='z'){
        c = 'A' + (c - 'a');
    }
    putchar(c);
    return 0;
}
