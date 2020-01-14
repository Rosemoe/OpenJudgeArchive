#include<cstdio>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    while(a<=b)
        if(a&1) printf("%d ",a++);
        else a++;
    return 0;
}
