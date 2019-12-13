#include<cstdio>
int main(){
    int n,a[3]={0,0,0},x;
    scanf("%d",&n);
    for(int v=0;v<n;v++)
    for(int i=0;i<3;i++){
        scanf("%d",&x);
        a[i]+=x;
        if(i!=0&&a[i]>=60){
            a[i]-=60;
            a[i-1]++;
        }
    }
    printf("%dhour %dminute %dsecond",a[0],a[1],a[2]);
    return 0;
}
