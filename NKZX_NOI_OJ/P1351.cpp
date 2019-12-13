#include<cstdio>
int main(){
    int y,m;
    scanf("%d%d",&y,&m);
    switch(m){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            puts("31");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            puts("30");
            break;
        case 2:
            if(y%4==0&&y%100!=0){
                puts("29");
            }else if(y%400==0&&y%100==0){
                puts("29");
            }else{
                puts("28");
            }
    }
    return 0;
}
