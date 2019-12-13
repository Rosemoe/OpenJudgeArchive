#include<cstdio>
int main(){
    int a;
    double bike,walk;
    scanf("%d",&a);
    bike = 50 + a/3.0;
    walk = a/1.2;
    if(bike > walk)
    printf("Walk");
    else if(walk > bike)
    printf("Bike");
    else
    printf("All");
    return 0;
} 
