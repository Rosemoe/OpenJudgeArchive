#include<cstdio>
int main(){
    char a[11],b[11];
    scanf("%s%s",a,b);
    int s = 0;
    int i1=0,i2=0;
    while(a[i1]!='\0'){
        i2 = 0;
        while(b[i2]!='\0'){
            s += (a[i1]-'0') * (b[i2++]-'0');
        }
        i1++;
    }
    printf("%d",s);
    return 0;
}
