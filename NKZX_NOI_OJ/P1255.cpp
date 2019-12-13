#include<cstdio>
int main(){
    int n,s1=0,s2=0,c;scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&c);if(c%2) s1+=c; else s2+=c;
    }
    printf("%d\n%d",s1,s2);return 0;
}
