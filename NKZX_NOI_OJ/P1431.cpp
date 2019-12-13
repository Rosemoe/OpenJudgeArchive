#include <cstdio>
inline bool pop(char c){
    return (c == ')' || c == ']' || c == '}' || c == '>');
}
inline int level(char c){
    switch(c){
        case '(':
        case ')':
            return 1;
        case '[':
        case ']':
            return 2;
        case '{':
        case '}':
            return 3;
        case '<':
        case '>':
            return 0;
    }
    return -1;
}
int main() {
    int n,i,j,s[300],top;char str[300],c;bool valid;
    scanf("%d",&n);
    for(i = 0;i < n;i++){
        top = 0;
        valid = 1;
        j = 0;
        scanf("%s",str);
        while(true){
            c = str[j++];
            if(level(c) == -1){
                break;
            }
            if(pop(c)){
                if(top == 0 || s[top - 1] != level(c)){
                    valid = 0;
                    break;
                }else{
                    top--;
                }
            }else{
                if(top != 0 && s[top - 1] <= level(c)){
                    valid = 0;
                    break;
                }
                s[top++] = level(c);
            }
        }
        if(valid){
            valid = top == 0;
        }
        puts(valid ? "YES" : "NO");
    }
    return 0;
}
