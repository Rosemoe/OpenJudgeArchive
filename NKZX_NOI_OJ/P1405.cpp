#include<cstdio>
int max;
bool available[21] = {};
void test(int values[],int index){
    for(int i=0;i<21;i++){
        if(available[i]/* && (index==0?true:i>values[index-1])*/){
            values[index] = i;
            available[i]=0;
            if(index == max-1){
                for(int v=0;v<=index;v++){
                    printf("%d",values[v]);
                    putchar(' ');
                }
                putchar('\n');
            }
            else{
                test(values,index+1);
            }
            available[i]=1;
        }else{
            continue;
        }
    }
}
int main(){
    int n,c=0;
    scanf("%d",&n);
    max = n;
    int a[21]={};
    for(int i=1;i<=n;i++) available[i]=1;
    test(a,0);
    return 0;
}
