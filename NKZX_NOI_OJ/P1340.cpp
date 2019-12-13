#include<cstdio>
int main(){
    char c = getchar();
    int m;
    double o;
    scanf("%d",&m);
    if(c=='V'){
        puts(m>1000 ? "YES" : "NO");
        if(m<=500){
            o = m*0.85;
        }else if(m<=1000){
            o = m*0.8;
        }else{
            o = m*0.75;
        }
    }else{
        puts(m>500 ? "YES" : "NO");
        o = m*0.9;
    }
    printf("%.2f",o);
    return 0;
}
