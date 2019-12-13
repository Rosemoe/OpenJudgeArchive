#include<cstdio>
short val[10000],n;
int main(){
    scanf("%d",&n);
    short max=0,index=0;
    for(int i=0;i<n;i++){
        scanf("%d",&val[i]);
        if(val[i]>max){
            max=val[i];
            index=i;
        }
    }
    short tmp = val[0];
    val[0]=val[index];
    val[index]=tmp;
    for(int i=0;i<n;i++)
        printf("%d ",val[i]);
    return 0;
}
