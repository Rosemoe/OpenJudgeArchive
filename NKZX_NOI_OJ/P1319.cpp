#include<cstdio>
void bubbleSort(int array[],int start,int end){
    bool exitFlag = 0;
    int cache;
    for(int i = start;i < end;i++){
        exitFlag = 1;
        for(int j = 0;j + 1 < end - start;j++){
            if(array[j] > array[j + 1]){
                cache = array[j];
                array[j] = array[j + 1];
                array[j + 1] = cache;
                exitFlag = 0;
            }
        }
        if(exitFlag)
            return;
    }
}
int main(){
    int n,a[1000];
    scanf("%d",&n);
    for(int i = 0;i < n;i++)
        scanf("%d",&a[i]);
    bubbleSort(a,0,n);
    for(int i = 0;i < n;i++)
        printf("%d ",a[i]);
    return 0;
}
