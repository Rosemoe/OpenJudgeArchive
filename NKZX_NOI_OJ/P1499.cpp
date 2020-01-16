#include<cstdio>
#include<cstring>
int main(){
    int n,a=0,b=0,c=0;
    char str[65536];
    scanf("%d",&n);
    while(n--) {
        scanf("%s",str);
        for(int i=0;i<strlen(str);i++){
            switch(str[i]) {
                case 'A':a++;break;
                case 'B':b++;break;
                case 'C':c++;break;
            }
        }
    }
    printf("%d %d %d",a,b,c);
    return 0;
}
