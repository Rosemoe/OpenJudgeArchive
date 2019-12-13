#include<cstdio>
short val[100],n;
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&val[i]);
    }
    for(int i=0;i<n;i++){
        bool l = true;
        for(int v=0;v<n-1;v++){
            if(val[v]>val[v+1]){
                short tmp = val[v];
                val[v] = val[v+1];
                val[v+1]=tmp;
                l = false;
            }
        }
        if(l) break;
    }
    for(int i=0;i<n;i++)
        printf("%d ",val[i]);
    return 0;
}
