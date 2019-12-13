#include<cstdio>
bool a[100][100];
int n,m;
inline int get(const int i1,const int i2){
    int sum=0;
    if(i1-1>=0){
        sum += a[i1-1][i2];
        if(i2-1>=0){
            sum += a[i1-1][i2-1];
        }
        if(i2+1<m){
            sum += a[i1-1][i2+1];
        }
    }
    if(i2-1>=0){
        sum += a[i1][i2-1];
    }
    if(i1+1<n){
        sum += a[i1+1][i2];
        if(i2-1>=0){
            sum += a[i1+1][i2-1];
        }
        if(i2+1<m){
            sum += a[i1+1][i2+1];
        }
    }
    if((i2+1)<m)
        sum += a[i1][i2+1];
    return sum;
}
int main(){
    char c;
    scanf("%d%d",&n,&m);
    for(int i1=0;i1<n;i1++){
        for(int i2=0;i2<m;i2++){
            c=' ';
            while(c==' '||c=='\n'){
                c=getchar();
            }
            if(c == '*'){
                a[i1][i2] = 1;
            }
        }
    }
    for(int i1=0;i1<n;i1++){
        for(int i2=0;i2<m;i2++){
            if(a[i1][i2]!=1)
                printf("%d",get(i1,i2));
            else
                printf("*");
        }
        putchar('\n');
    }
    return 0;
}
