#include<cstdio>
 
int a,b,c;
 
void func_1(){
    c=a+b;
}
 
void func_2(){
    c=a-b;
}
 
void func_3(){
    c=a*b;
}
 
void func_4(){
    c=a/b;
}
 
int main(){
    scanf("%d%d%d",&a,&b,&c);
    typedef void (*func)();
    func funcs[] = {NULL,func_1,func_2,func_3,func_4};
    funcs[c]();
    printf("%d",c);
    return 0;
}
