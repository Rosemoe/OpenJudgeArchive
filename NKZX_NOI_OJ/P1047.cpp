#include<cstdio>
int main(){
    int person[100],n,x;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&person[i]);
    }
    scanf("%d",&x);
    x--;
    for(int i=0;i<n;i++){
        if(i != x)
            printf("%d ",person[i]);
    }
    return 0;
}
