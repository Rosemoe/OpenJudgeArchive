#include<cstdio>
int main(){
    int y,z;
    scanf("%d%d",&y,&z);
    printf("%lld",(long long)(y<z?y:z)*2);
    return 0;
}
