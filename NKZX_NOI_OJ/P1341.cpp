#include<cstdio>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if(a<60&&b>=60){
        puts("1");
    }else if(a>=60&&b<60){
        puts("1");
    }else{
        puts("0");
    }
    return 0;
}
