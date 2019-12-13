#include<cstdio>
#include<algorithm>
int a[200001];
int main(){
    int n,data,count;
    scanf("%d",&n);
    for (int i=1; i<=n;i++) 
        scanf("%d",&a[i]);
    std::sort(a+1,a+n+1);
    data=a[1];count=1;
    for (int i=2; i<=n; i++)
        if (a[i]==data) count++;
        else{
            printf("%d %d\n",data,count);
            data=a[i];count=1;
        }
    printf("%d %d\n",data,count);
    return 0;
}
