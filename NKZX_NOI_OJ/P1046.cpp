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
        int index=i;
        if(i == x){
            index = n - 1;
        }else if(i > x){
            index = i - 1;
        }
        printf("%d ",person[index]);
    }
    return 0;
}
