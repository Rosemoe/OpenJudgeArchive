#include<cstdio>
void print(int n,int ch){
    for(int i=0;i<n;i++){
        for(int v=0;v<i+1;v++) putchar(ch);
        putchar('\n');
    }
}
int main(){
    int n;char ch;
    scanf("%d %c",&n,&ch);
    print(n,ch);
    return 0;
}
