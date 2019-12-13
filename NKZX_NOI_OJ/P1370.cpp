#include<cstdio>
int main(){
    double s=0;int n,c;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&c);
        s+=c;
    }
    printf("%.2f",s/n);
    return 0;
}
