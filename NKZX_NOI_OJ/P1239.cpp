#include<cstdio>
void m(int n,char a,char b,char c){
    if(n==1) printf("%c->%c\n",a,c);
    else{
        m(n-1,a,c,b);
        printf("%c->%c\n",a,c);
        m(n-1,b,a,c);
    }
}
int main(){
    int n;scanf("%d",&n);
    m(n,'A','B','C');return 0;
}
