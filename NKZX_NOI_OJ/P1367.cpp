#include<cstdio>
int main(){
    double curr=0,sum=0;int h;
    scanf("%d",&h);
    sum=curr=h;
    for(int i=0;i<9;i++){
        curr/=2;
        sum+=curr*2;
    }
    curr/=2;
    printf("%g\n%g",sum,curr);
    return 0;
}
