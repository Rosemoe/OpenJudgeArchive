#include<cstdio>
#include<algorithm>
int a[1000100],n;
const int shift[50] = {-2,-1,0,1,2};
const int count = 5;
int findAround(int value) {
    int left = 1,right = n,mid = 0;
    while(left <= right) {
        mid = (left + right) / 2;
        if(a[mid] == value) {
            return mid;
        }else if(a[mid] > value) {
            right = mid - 1;
        }else {
            left = mid + 1;
        }
    }
    return right;
}
bool checkIndex(int i,int j) {
    return (i != j && i >= 1 && i <= n);
}
int abs(int a) {
    return (a > 0 ? a : -a);
}
int main(){
    scanf("%d",&n);
    for(int i = 1;i <= n;i++)
        scanf("%d",&a[i]);
    std::sort(a + 1,a + n + 1);
    int min = abs(a[1] + a[2]);
    for(int i = 1;i <= n;i++){
        int idx = findAround(-a[i]);
        for(int j = 0;j < count;j++) {
            int k = idx + shift[j];
            if(checkIndex(k,i)){
                if(abs(a[i] + a[k]) < min) {
                    min = abs(a[i] + a[k]);
                }
            }
        }
    }
    printf("%d",min);
    return 0;
}
