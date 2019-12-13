#include<cstdio>
int main(){
    int j[10],n=0,a;
    for(int i=0;i<10;i++){
        scanf("%d",&j[i]);
    }
    scanf("%d",&a);
    for(int i=0;i<10;i++){
        if(j[i]<=a+30){
            n++;
        }
    }
    printf("%d",n);
    return 0;
}
