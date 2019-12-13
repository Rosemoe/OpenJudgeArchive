#include<cstdio>
short num[7];
void add();
int count = 0,b;
int main(){
    int a;
    scanf("%d%d",&a,&b);
    for(int i = 0;i < a;i++){
        add();
    }
    printf("%d",count);
    return 0;
}
 
void add(){
    num[6] += 1;
    for(int i=6;i>-1;i--){
        if(num[i] > 9){
            num[i] -= 10;
            num[i-1] += 1;
        }
    } 
    bool a = false;
    for(int i=0;i<7;i++){
        if(num[i] != 0)
            a=true;
        if(a && num[i] == b){
            count++;
        }
    }
}
