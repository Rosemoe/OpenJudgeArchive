#include<cstdio>
short _a[2][3000],_c[4]={1},flag=0;
void doTask(){
    flag = !flag;
    for(int i=0;i<3000;i++)  _a[flag][i] = 0;
    for(int i=0;i<4;i++)
        if(_c[i] != 0)
            for(int offset=0;offset<3000;offset++)
                _a[flag][offset+i] += _a[!flag][offset] * _c[i];
    for(int i=0;i<3000;i++)
        if(_a[flag][i] > 9){
            _a[flag][i+1] += _a[flag][i]/10;
            _a[flag][i]%=10;
        }
}
int main(){
    int n,f=0;
    scanf("%d",&n);
    _a[0][0]=1;
    for(int i=1;i<n;i++){
        _c[0]++;
        for(int i=0;i<4;i++)
            if(_c[i]>9) _c[i]-=10,_c[i+1]++;
            else break;
        doTask();
    }
    for(int i=2999;i>=0;i--){
        if(_a[flag][i] != 0)    f = 1;
        if(f)   putchar('0'+_a[flag][i]);
    }
    return 0;
} 
