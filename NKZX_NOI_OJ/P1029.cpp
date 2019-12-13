#include<cstdio>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int x = b-a;
    int r=a;
    for(int i = 1;i<c;i++)
      r = r+x;
    printf("%d",r); 
    return 0;
}
