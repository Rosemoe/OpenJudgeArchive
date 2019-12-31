#include<cstdio>
bool p[50000000]; 
int main (){
    int m,n,c=0;
    scanf("%d%d",&m,&n);
    p[1] = 1;
    for(int i = 2;i <= n;i++)
        for(int j = i * 2;j <= n;j+=i)
            p[j] = 1;
    for(int i = m;i <=n;i++)
        if(!p[i])
            c++;
    printf("%d",c);
    return 0;
}
