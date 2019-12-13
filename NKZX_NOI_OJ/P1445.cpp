#include <cstdio>
int main() {
    int i=0,j=0;
    for(;i<8;i++)if(getchar()=='1')j++;
    printf("%d",j);
    return 0;
}
