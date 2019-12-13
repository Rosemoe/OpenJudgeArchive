#include<cstdio>
int main(){
    int n,c,min=2100000000,minI;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&c);
        if(c<min){
            min=c;
            minI=i;
        }
    }
    printf("%d",minI);
    return 0;
}
