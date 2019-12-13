#include<cstdio>
int main(){
    char c=getchar();
    int m;
    scanf("%d",&m);
    switch(c){
        case 'P':
            printf("%.2f",m*0.7);break;
        case 'G':
            printf("%.2f",m*0.8);break;
        case 'S':
            printf("%.2f",m*0.9);break;
        default:
            printf("%.2f",m*0.95);break;
    }
    return 0;
}
