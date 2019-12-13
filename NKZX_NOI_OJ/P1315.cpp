#include<cstdio>
int main(){
    int n,a[110];
    scanf("%d",&n);
    for(int i = 0;i < n;i++){
        scanf("%d",&a[i]);
    }
    for(int i = 1;i < n - 1;i++){
        if(a[i] > a[i - 1] && a[i] > a[i + 1]){
            printf("%d ",a[i]);
        } 
    }
    return 0;
}
