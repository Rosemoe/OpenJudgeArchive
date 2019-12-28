#include<cstdio>
int a[120],b[120],c[250];
int read(int arr[]){
    char c = 0;
    int l = 0;
    while(c < '0' || c > '9') c = getchar();
    while(c >= '0' && c <= '9'){
        arr[l++] = c - '0';
        c = getchar();
    }
    for(int i = 0,j = l - 1;i < j;i++,j--){
        int x = arr[i];
        arr[i] = arr[j];
        arr[j] = x;
    }
    return l;
}
int main(){
    int la = read(a),lb = read(b);
    for(int i = 0;i < la;i++){
        if(a[i] == 0) {
            continue;
        }
        for(int j = 0;j < lb;j++){
            c[j + i] += a[i] * b[j];
            if(c[i + j] > 9) {
                c[i + j + 1] += c[i + j] / 10;
                c[i + j] %= 10;
            }
        }
    }
    for(int i = 0;i < 220;i++){
        if(c[i] > 9) {
            c[i + 1] += c[i] / 10;
            c[i] %= 10;
        }
    }
    bool f = 0;
    for(int i = 220;i >= 0;i--){
        if(!f){
            if(c[i] != 0){
                putchar('0' + c[i]);
                f = 1;
            }
        }else{
            putchar('0' + c[i]);
        }
    }
    if(!f){
        puts("0");
    }
    return 0;
}
