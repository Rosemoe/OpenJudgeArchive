#include<cstdio>
int main(){
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    if(x<=y&&y<=z) puts("YES");
    else puts("NO");
    return 0;
}
