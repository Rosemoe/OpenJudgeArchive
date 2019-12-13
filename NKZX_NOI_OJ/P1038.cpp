#include<cstdio>
#include<cstring>
int main(){
    char str[101];int n;
    scanf("%d %s",&n,&str);
    int r=0,u=1,len=strlen(str);
    for(int i = len - 1;i > -1;i--){
        r += (str[i]-'0') * u;
        u *= n;
    }
    printf("%d",r);
    return 0;
}
