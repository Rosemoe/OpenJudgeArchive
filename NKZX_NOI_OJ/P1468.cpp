#include<cstdio>
struct Rect{
    int w;
    int h;
}rect[100];
int main(){
    int n;
    scanf("%d",&n);
    for(int i = 1;i <= n;i++){
        scanf("%d%d",&rect[i].h,&rect[i].w);
        if(rect[i].w < rect[i].h) {
            int tmp = rect[i].w;
            rect[i].w = rect[i].h;
            rect[i].h = tmp;
        }
    }
    int count = 0;
    for(int i = 1;i <= n;i++)
        for(int j = 1;j <= n;j++)
            for(int k = j + 1;k <= n;k++){
                if(i == j || j == k || k == i){
                    continue;
                }
                if(rect[j].w + rect[k].w <= rect[i].w && rect[j].h <= rect[i].h && rect[k].h <= rect[i].h) {
                    count++;
                }
            }
    printf("%d",count);
    return 0;
}
