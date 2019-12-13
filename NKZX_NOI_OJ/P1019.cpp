#include<cstdio>
inline int man();
inline int woman();
int m,n,k;
int a = 0,b = 0;
int main(){
    scanf("%d %d %d",&m,&n,&k);
    for(int i=0;i<k;i++){
        printf("%d %d\n",man(),woman());
    }
    return 0;
}
inline int man(){
    if(a==m){
        a = 1;
        return 1;
    }else{
        return ++a;
    }
}
inline int woman(){
    if(b==n){
        b = 1;
        return 1;
    }else{
        return ++b;
    }
}
