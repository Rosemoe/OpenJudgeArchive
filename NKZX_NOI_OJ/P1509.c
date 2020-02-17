#include<stdio.h>
int main() {
    int n,c=1;
    scanf("%d",&n);
    for(int i=1;i<n;i++)c=++c<<1;
    printf("%d",c);
    return 0;
}
