#include<cstdio>
int main(){
    char c = getchar();
    if(c>='0'&&c<='9'){
        puts("number");
    }else if(c>='a'&&c<='z'){
        puts("lowercase");
    }else if(c>='A'&&c<='Z'){
        puts("capital");
    }else{
        puts("others");
    }
    return 0;
}
