#include<cstdio>
int main(){
    int n,c;
    scanf("%d",&n);
    for(int i = 0;i < n;i++){
        scanf("%d",&c);
        if(c*c%7 != 1){
            printf("%d ",c);
        }
    }
    return 0;
} 
