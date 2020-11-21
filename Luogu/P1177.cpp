#include<cstdio>
int a[600100],n;
void qsort(int l,int r) {
    int i = l,j = r,mid = a[(l + r) >> 1],tmp;
    while(i <= j) {
        while(a[i] < mid) i++;
        while(a[j] > mid) j--;
        if(i <= j) {
            tmp = a[i];
            a[i] = a[j];
            a[j] = tmp;
            i++;
            j--;
        }
    }
    if(j > l) qsort(l,j);
    if(i < r) qsort(i,r);
}
int main(){
    scanf("%d",&n);
    for(int i = 1;i <= n;i++)
        scanf("%d",&a[i]);
    qsort(1,n);
    for(int i = 1;i <= n;i++)
        printf("%d ",a[i]);
    return 0;
}
