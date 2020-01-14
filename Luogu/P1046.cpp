#include<cstdio>
int main(){
    int values[10],height,count=0;
    for(int i=0;i<10;i++){
        scanf("%d",&values[i]);
    }
    scanf("%d",&height);
    height += 30;
    for(int i=0;i<10;i++){
        if(height >= values[i]){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
