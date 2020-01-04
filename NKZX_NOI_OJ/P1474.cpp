#include<cstdio>
int main(){
    int i = 1,s = 0;
    while(i <= 200) {
        s = s + i++;
    }
    printf("%d",s);
    return 0;
}
