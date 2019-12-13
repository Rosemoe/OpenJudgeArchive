#include<cstdio>
bool a[10001];
int main(){
    int v,c=0;
    scanf("%d",&v);
    a[1]=a[0]=1;
    for(int i=2;i<=100;i++) for(int x=i+1;x<10001;x++) if(x%i==0) a[x] = 1;
    for(int i=2;i<=v;i++) c+=!a[i];
    printf("%d",c);
    return 0;
}
