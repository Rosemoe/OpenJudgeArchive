#include<cstdio>
int main(){
    int *p = new int[100],n;
    scanf("%d",&n);
    for(int i = 0;i < n;i++,p++){
        scanf("%d",p);
    }
    p--;
    for(int i = 0;i < n;i++,p--){
        printf("%d ",*p);
    }
    return 0;
}
