#include<cstdio>
int abs(int v){
    return (v>0)?v:-v;
}
int main(){
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    printf("%d",abs(a-c)+abs(b-d));
    return 0;
}
