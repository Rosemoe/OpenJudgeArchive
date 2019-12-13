#include<cstdio>
#include<cmath>
#include<cstring>
bool isPrime(const long long v1){
    for(long long i = 2;i <= sqrt(v1);i++){
        if(v1 % (i*i) == 0)
            return false;
    }
    return true;
}
long long read(){
    long long v=0;
    char str[20];
    scanf("%s",str);
    v=0;
    for(int i = 0;strlen(str) > i;i++){
        v = v * 10 + str[i] - '0';
    }
    return v;
}
int main(){
    long long value = 1,src,s=2;
    src=read();
    while(!isPrime(src)){
        if(src % (s*s) == 0){
            value *= s;
            src /= s*s;
        }else{
            s++;
        }
    }
    printf("%lld\n%lld",value,src);
    return 0;
}
