#include<cstdio>
const int days[13] = {0,31,0,31,30,31,30,31,31,30,31,30,31};
inline int getDay(int year,int month){
    if(month!=2) return days[month];
    else if((year%4==0&&year%100!=0)||(year%400==0)) return 29;
    else return 28;
} 
int main(){
    int start,end,count=0;
    scanf("%d%d",&start,&end);
    for(int i = 0;i <= 9999;i++){
        int d = 0,y = i;
        while(y) {
            d = d * 10 + y % 10;
            y /= 10;
        }
        if(start <= i * 10000 + d && end >= i * 10000 + d)
            if(d / 100 >= 1 && d / 100 <= 12 && d % 100 >= 1 && d % 100 <= getDay(i,d / 100))
                count++;
    }
    printf("%d",count);
    return 0;
}
