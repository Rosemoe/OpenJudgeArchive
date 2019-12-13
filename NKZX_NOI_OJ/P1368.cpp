#include<cstdio>
int main(){
    int s;
    scanf("%d",&s);
    if(s==1){
        printf("%d*3+1=%d\n",s,s*3+1);
        s=s*3+1;
    }
    while(s!=1){
        if(s%2){
            printf("%d*3+1=%d\n",s,s*3+1);
            s=s*3+1;
        }else{
            printf("%d/2=%d\n",s,s/2);
            s/=2;
        }
    }
    puts("End");
    return 0;
}
