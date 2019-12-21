#include<cstdio>
#include<algorithm>
int main(){
    double v[3];
    for(int i=0;i<3;i++) scanf("%lf",&v[i]);
    std::sort(v,v+3);
    if(v[0] * v[0] + v[1] * v[1] == v[2] * v[2] && v[0] + v[1] > v[2]){
        printf("%.2f",v[1] * v[0] / 2);
    }else{
        puts("wrong data!");
    }
    return 0;
}
