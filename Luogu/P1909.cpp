#include<cstdio>
int main(){
    int n,count,money,min=0,f;
    int worth[3] = {};
    scanf("%d",&n);
    for(int i = 0;i < 3;i++){
        scanf("%d%d",&count,&money);
        worth[i] = (n/count + (n%count != 0 ? 1 :0)) * money;
    }
    for(int i = 1;i < 3;i++)
        if(worth[i] < worth[min]) min = i;
    printf("%d",worth[min]);
    return 0;
} 
