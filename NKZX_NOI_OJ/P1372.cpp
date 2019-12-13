#include<cstdio>
int main(){
    int k,c,m=-1;
    scanf("%d",&k);
    for(int i=0;i<k;i++){
        scanf("%d",&c);
        m = m<c ? c : m;
    }
    printf("%d",m);
    return 0;
}
