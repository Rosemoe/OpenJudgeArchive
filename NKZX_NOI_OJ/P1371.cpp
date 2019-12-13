#include<cstdio>
int main(){
    int k,c,a=0,b=0,d=0,i=0;
    scanf("%d",&k);
    for(;i<k;i++){
        scanf("%d",&c);
        switch(c){
            case 1:a++;break;
            case 5:b++;break;
            case 10:d++;break;
        }
    }
    printf("%d\n%d\n%d",a,b,d);
    return 0;
}
