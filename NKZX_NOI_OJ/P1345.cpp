#include<cstdio>
#include<cmath>
int main(){
    int a,m=0;char c;
    scanf("%d %c",&a,&c);
    if(a <= 1000){
        m += 8;
    }else{
        m += 8;
        m += ceil((a-1000)/500.0) * 4;
    }
    if(c == 'y'){
        m += 5;
    }
    printf("%d",m);
    return 0;
} 
