#include<cstdio>
int main(){
    int s,j=0,k;
    scanf("%d",&s);
    if(s<0){
        putchar('-');
        s=-s;
    }
    while(s>0){
        k=s%10;
        s/=10;
        if(k!=0||j){
            j=1;
            putchar('0' + k);
        }
    }
    return 0;
}
