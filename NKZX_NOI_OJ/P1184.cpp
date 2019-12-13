#include<cstdio>
bool a[1001];
int main(){
    int v;
    scanf("%d",&v);
    a[1]=a[0]=1;
    for(int i=2;i<=100;i++) for(int x=i+1;x<1001;x++) if(x%i==0) a[x] = 1;
    for(int p1=2;p1<v;p1++){
        if(a[p1]==0&&a[v-p1]==0){
            printf("%d = %d + %d",v,p1,v-p1);
            break;
        }
    }
    return 0;
