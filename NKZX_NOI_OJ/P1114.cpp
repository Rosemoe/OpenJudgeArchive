#include<cstdio>
struct action{
    int x,y,lx,ly;
}a[10000];
inline int read(){
    int v=0;register char c=0;
    while(c<'0'||c>'9') c=getchar();
    while(c>='0'&&c<='9') v=(v<<5)+(v<<2)+(c^48),c=getchar();
    return v;
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        a[i].x=read();a[i].y=read();a[i].lx=read();a[i].ly=read();
    }
    int x=read(),y=read();
    int r = -1;
    for(int i=0;i<n;i++)
        if(x>=a[i].x&&x<=a[i].x+a[i].lx&&y>=a[i].y&&y<=a[i].y+a[i].ly) r=i+1;
    printf("%d",r);
    return 0;
}
