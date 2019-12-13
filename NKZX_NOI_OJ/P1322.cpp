#include<cstdio>
int main(){
int n,a[1001],ii,x;
scanf("%d",&n);
for(int i = 0;i < n;i++)
    scanf("%d",&a[i]);
scanf("%d",&x);
ii = -1;
for(int i = n - 1;i >= 0;i--)
    if(a[i] < x){
        ii = i;
        break;
    } 
if(ii == -1){
    printf("%d ",x);
}
for(int i = 0;i < n;i++)
    if(ii == i){
        printf("%d %d ",a[i],x);
    }else{
        printf("%d ",a[i]);
    }
return 0;
}
