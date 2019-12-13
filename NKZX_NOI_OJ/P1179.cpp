#include<cstdio>
int main(){
    int mi,ma,c=0;
    scanf("%d%d",&mi,&ma);
    for(int i=mi;i<=ma;i++){
        if(i%100!=0&&i%4==0) c++;
        else if(i%400==0) c++;
    }
    printf("%d",c);
    return 0;
}
