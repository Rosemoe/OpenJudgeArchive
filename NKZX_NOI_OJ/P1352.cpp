#include<cstdio>
int main(){
    char s[10][20] = {
        "One","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten"
    };
    int a;
    scanf("%d",&a);
    printf("%s",s[a-1]);
    return 0;
}
