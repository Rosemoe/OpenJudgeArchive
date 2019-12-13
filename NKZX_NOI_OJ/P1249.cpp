#include<cstdio>
void cpy(char a[],char b[]){
    for(int i=0;i<30;i++){
        b[i]=a[i];
    }
}
int main(){
    int n,h=0,num,c,d;
    scanf("%d",&n);
    char a[30],b[30];
    for(int i=0;i<n;i++){
        scanf("%s %d %d",a,&c,&d);
        if(c>h){
            h=c;
            num=d;
            cpy(a,b);
        }else if(c==h&&d<num){
            num=d;
            cpy(a,b);
        }
    }
    printf("%s %d %d",b,h,num);
    return 0;
}
