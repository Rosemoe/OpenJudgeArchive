#include<cstdio>
int main(){
    for(int i=10;i<=99;i++) {
        int j = i%10*10 + i/10;
        if(j - i == 36)
            printf("%d ",i);
    }
    return 0;
}
