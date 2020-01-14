#include<cstdio>
int main(){
    double a=1e30,b;int n,i,j;
    scanf("%d",&n);
    while(n--) {
        scanf("%d %lf",&i,&b);
        if(b < a){
            j = i;
            a = b;
        }
    }
    printf("%d\n%g",j,a);
    return 0;
}
