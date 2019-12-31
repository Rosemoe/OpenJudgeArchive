#include<cstdio>
struct Node{
    int h;
    int w;
}p[25];
int main(){
    int n,m,min = 10000000;
    scanf("%d",&n);
    for(int i = 1;i <= n;i++){
        scanf("%d%d",&p[i].w,&p[i].h);
    }
    scanf("%d",&m);
    for(int i = 1;i <= n;i++){
        bool ava = 0;
        {
            int rest = m -  p[i].w;
            int j = i - 1;
            while(j > 0 && p[j].h <= p[i].h){
                rest -= p[j].w;
                if(rest <= 0){
                    break;
                }
                j--;
            }
            if(rest <= 0){
                ava = 1;
            }
        }
        if(!ava){
            int rest = m - p[i].w;
            int j = i + 1;
            while(j <= n && p[j].h <= p[i].h){
                rest -= p[j].w;
                if(rest <= 0){
                    break;
                }
                j++;
            }
            if(rest <= 0){
                ava = 1;
            }
        }
        if(ava && p[i].h < min){
            min = p[i].h;
        }
    }
    printf("%d",min + m);
    return 0;
}
