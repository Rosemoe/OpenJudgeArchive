#include<cstdio>
int main(){
    double j;
    scanf("%lf",&j);
    if(j<50){
        printf("%.2f",j);
    }else if(j <= 100){
        printf("%.2f",j*0.9);
    }else{
        printf("%.2f",100*0.9+(j-100)*0.8);
    }
    return 0;
}
