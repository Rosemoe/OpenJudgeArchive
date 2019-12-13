#include<cstdio>
#include<cstring>
int main(){
    char s[241];int c,k;
    scanf("%s%d",s,&k);c=strlen(s);
    for(int i=0;i<k&&c>1;i++,c--){
        int j=0;
        for(int v=0;v<c-1;v++){
            if(s[v]>s[v+1]){
                j=v;break;
            }
        }
        for(int v=j;v<c;v++){
            s[v]=s[v+1];
        }
    }
    printf("%s",s);
    return 0;
}
