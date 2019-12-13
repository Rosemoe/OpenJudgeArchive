#include <cstdio>
int main() {
    float j;
    scanf("%f",&j);
    if(j <= 100 && j >= 90){
        printf("%g->A",j);
    }else if(j <= 89 && j >= 80){
        printf("%g->B",j);
    }else if(j <= 79 && j >= 60){
        printf("%g->C",j);
    }else if(j < 60 && j >= 0){
        printf("%g->D",j);
    }
    return 0;
}
