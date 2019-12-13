#include<cstdio>
#include<cstring>
int main(){
    char a[256],b[256];
    gets(a);
    gets(b);
    printf("%s",strcmp(a,b) > 0 ? b : a);
    return 0;
}
