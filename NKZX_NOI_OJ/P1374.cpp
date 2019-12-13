#include<cstdio>
int main(){
    int s,e,a=0;
    scanf("%d%d",&s,&e);
    for(;s<=e;s++) if(s%2) a+=s;
    printf("%d",a);
    return 0;
}
