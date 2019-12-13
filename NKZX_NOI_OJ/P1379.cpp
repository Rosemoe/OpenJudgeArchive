#include<cstdio>
int n,m,k,c;
int main(){
    scanf("%d%d%d",&n,&m,&k);
    for(int i = n ;i <= m;i++){
        if(i%19==0){
            int x = 0,copy = i;
            while(copy){
                if(copy % 10 == 3){
                    x++;
                }
                copy /= 10;
            }
            if(x == k)
                c++;
        }
    }
    printf("%d",c);
    return 0;
}
