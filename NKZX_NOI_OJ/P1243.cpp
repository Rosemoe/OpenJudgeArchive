#include<cstdio>
struct a{
    int n;
    float w;
    char c;
    char m[50];
}s;
int main(){
    int a,b;
    scanf("%s %c %d %f",s.m,&s.c,&s.n,&s.w);
    printf("%s %c %d %.1f",s.m,s.c,s.n,s.w);
    return 0;
}
