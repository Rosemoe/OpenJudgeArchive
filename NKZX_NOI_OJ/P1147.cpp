#include<cstdio>
double a,b,c,d;
double f(double x) {
    return a*x*x*x + b*x*x + c*x + d;
}
int main(){
    scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
    for(int i = -100;i <= 100;i++) {
        if(f(i) == 0) {
            printf("%.2f ",(double)i);
        }else if(f(i) * f(i + 1) < 0) {
            double left = i,right = i + 1,mid;
            while(left <= right) {
                if(right - left <= 0.001) {
                    break;
                }
                mid = (left + right) / 2;
                if(f(mid) == 0) {
                    left = mid;
                    break;
                }else if(f(mid) * f(left) < 0) {
                    right = mid;
                }else{
                    left = mid;
                }
            }
            printf("%.2f ",left);
        }
    }
    return 0;
}
