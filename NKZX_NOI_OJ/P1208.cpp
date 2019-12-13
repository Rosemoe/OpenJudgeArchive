#include<cstdio>
int l[100];
int main(){
    int n,k;
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&l[i]);
    scanf("%d",&k);
    for(int i=0;i<n;i++) if(l[i]==k){
        printf("%d",i+1);
        return 0;
    }
    putchar('0');
    return 0;
}
