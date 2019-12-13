#include<cstdio>
int main(){
    int c=0,k;
    while(scanf("%d",&k)==1){
        if(k%2)
            c++;
    }
    printf("%d",c);
    return 0;
}
