#include<cstdio>
int main(){
    int y;
    scanf("%d",&y);
    if(y%4==0&&y%100!=0){
        puts("YES");
    }else if(y%400==0&&y%100==0){
        puts("YES");
    }else{
        puts("NO");
    }
    return 0;
}
