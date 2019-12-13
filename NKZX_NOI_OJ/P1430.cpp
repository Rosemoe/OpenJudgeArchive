#include <cstdio>
char local = '?';
inline char getChar(){
    if(local == '?'){
        return getchar();
    }else{
        char r = local;
        local = '?';
        return r;
    }
}
inline void cacheChar(char c){
    local = c;
}
inline long long nextLong(){
    long long r = 0;
    register char c = '?';
    while(c < '0' || c > '9'){
        c = getChar();
    }
    while(c >= '0' && c <= '9'){
        r = (r << 3) + (r << 1) + (c - '0');
        c = getChar();
    }
    cacheChar(c);
    return r;
}
int main() {
    long long a = 0, b = -1, d;
    char c;
    bool s = 1;
    while (true) {
        d = nextLong();
        s = (c = getChar()) != '\0';
        d = d % 10000;
        if(s==0||(c!='+'&&c!='*')) break;
        switch (c) {
        case '+':
            a = a + (b != -1 ? (b * d) : d);
            b = -1;
            break;
        case '*':
            b = (b == -1) ? d : (b * d);
            break;
        }
        a = a % 10000;
        b = b % 10000;
    }
    a = a + (b != -1 ? (b * d) : d);
    printf("%lld", a % 10000);
    return 0;
}
