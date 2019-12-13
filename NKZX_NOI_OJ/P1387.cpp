#include<cstdio>
int main(){
    int v,vv=1,day=0,all=0;
    scanf("%d",&v);
    for(int i = 0;i < v;i++){
        if(day == vv){
            day = 0;
            vv++;
        }
        all+=vv;
        day++;
    }
    printf("%d",all);
    return 0;
} 
