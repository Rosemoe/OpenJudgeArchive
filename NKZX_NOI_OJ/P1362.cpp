#include<cstdio>
int main(){
    int c,n=0;
    while(1){
        scanf("%d",&c);
        if(c>0) n++;
        else if(c==0) break; 
    }
    printf("%d",n);
    return 0;
}
