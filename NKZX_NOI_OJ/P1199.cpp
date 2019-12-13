#include<cstdio>
int c = 0;
int ns[20];
void print(int i){
    for(int v=0;v<=i;v++){
        if(v!=0){
            putchar('+');
        }
        printf("%d",ns[v]);
    }
    c++;
    putchar('\n');
}
void f(int n,int i){
    for(int ii=1;ii<=n;ii++){
        if(i!=0&&ns[i-1]>ii){
            continue;
        }
        ns[i] = ii;
        if(n-ii>0){
            f(n-ii,i+1);
        }else{
            print(i);
            ns[i]=0;
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    f(n,0);
    printf("total=%d",c);
    return 0;
}
