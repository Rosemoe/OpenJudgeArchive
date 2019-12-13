#include<cstdio>
int main(){
    char key[27],src[81],i=0;
    gets(key);gets(src);
    while(src[i]!='\0'){
        int v=src[i]-'A';
        if(v>=0&&v<26) putchar(key[v]);
        else putchar(src[i]);
        i++;
    }
    return 0;
}
