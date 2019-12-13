#include<cstdio>
#include<algorithm>
using namespace std;
struct DataStruct{
    int time,order;
}a[10001];
int DataStructCompare(DataStruct a,DataStruct b){
    return a.time < b.time;
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i = 1;i <= n;i++){
        scanf("%d",&a[i].time);
        a[i].order = i;
    }
    sort(a+1,a+n+1,DataStructCompare);
    long long sum1=0,sum2=0;
    for(int i = 1;i <= n;i++){
        sum2 += sum1;
        sum1 += a[i].time;
        printf("%d ",a[i].order);
    }
    putchar('\n');
    printf("%0.2f\n",sum2 / 1.0 / n);
    return 0;
}
