#include<cstdio>
int main(){
    int m = 1,y = 1;
    double j = 0;
    while(true){
        double x = 1.0 / m;
        if(x < 10e-6){
            break;
        }
        j = j + (y % 2 ? x : -x);
        m+=2;
        y++;
    }
    printf("%.6f",j * 4);
    return 0;
}
