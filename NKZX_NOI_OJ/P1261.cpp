#include<cstdio>
int main(){
    int n,c;
    while(scanf("%d",&n)==1){
        c=0;
        while(n>0){
            c+=n-(n>>1<<1),n=n>>1;
        }
        printf("%s\n",c==1?"yes":"no");
    }
    return 0;
}
