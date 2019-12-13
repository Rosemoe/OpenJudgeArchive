#include <cstdio>
int main() {
    int d;
    scanf("%d",&d);
    if(d >= 6 && d <= 12){
        puts("Xiaoxue");
    }else if(d >= 13 && d <= 15){
        puts("Chuzhong");
    }else if(d >= 16 && d <= 18){
        puts("Gaozhong");
    }
    return 0;
}
