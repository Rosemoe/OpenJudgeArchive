#include<cstdio>
int main(){
    double y,l=0;
    scanf("%lf",&y);
    if(y >= 1000){
        l = 0.02;
        if(y >= 5000){
            l = 0.03;
            if(y >= 10000){
                l = 0.05;
            }
        }
    }
    printf("%.2f",y*l);
    return 0;
}
