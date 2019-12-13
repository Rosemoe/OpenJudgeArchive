#include<cstdio>
int main(){
    int n,x[101],a,y=0;
    scanf("%d",&n);
    for(int i = 1;i <= n;i++)
        scanf("%d",&x[i]);
    scanf("%d",&a);
    for(int i = 1;i <= n;i++){
        if(x[i] == a){
            y = i;
            break;
        }
    }
    printf("%d",y);
    return 0;
}
