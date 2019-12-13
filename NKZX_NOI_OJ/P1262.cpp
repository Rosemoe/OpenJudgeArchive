#include<cstdio>
int main(){
    int n,c,v=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&c);
        v=v^c;
    }
    printf("%d",v);
    return 0;
}
