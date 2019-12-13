#include<cstdio>
int n,x,c;
int main(){
    scanf("%d%d",&n,&x);
    for(int i = 0;i < n;i++){
        scanf("%d",&c);
        if(c != x){
            printf("%d ",c);
        }
    }
    return 0;
}
