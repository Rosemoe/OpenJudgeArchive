#include<cstdio>
#include<cstring>
const short SIZE = 10000;
int max = 0;
short a[SIZE],b[SIZE];
void readNum(short arr[]);
 int main(){
    readNum(a);
    readNum(b);
    for(int i=0;i < max;i++){
        a[i] += b[i];
        if(a[i] > 9){
            a[i+1] += a[i] / 10;
            a[i] %= 10;
        }
    }
    bool state = false;
    for(int i = SIZE-1;i > -1;i--){
        if(a[i] != 0 || i < max){
            printf("%d",a[i]);
            state = true;
        }
    }
    if(!state) printf("0");
    return 0;
}
 void readNum(short arr[]){
    char str[SIZE];
    scanf("%s",str);
    int len = strlen(str);
    if(max < len) max = len;
    for(int i =0;i < len;i++){
        arr[i] = str[len-i-1] - '0';
    }
}
