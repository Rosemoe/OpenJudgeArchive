#include<cstdio>
int main(){
    char k = getchar();
    int a,b,c;
    scanf("%d%d",&a,&b);
    if(k=='J'){
        printf("%d %d",2*(a+b),a*b);
    }else{
        scanf("%d",&c);
        printf("%d",a+b+c);
    }
    return 0;
}
