#include<cstdio>
void f(int n){
    if(n==1) printf("2(0)");
    else if(n==2) printf("2");
    else{
        bool a[32]={};
        int x=n,i=0,c=0,l=0;
        while(x){
            a[i]=(x/2*2!=x);c+=a[i++];x/=2;
        }
        for(int v=31;v>-1;v--){
            if(a[v]){
                if(v==0) printf("2(0)");
                else if(v==1) printf("2");
                else{
                    printf("2(");
                    f(v);
                    putchar(')');
                }
                l++;
                if(c!=l) putchar('+');
            }
        }
    }
}
int main(){
    int n;scanf("%d",&n);f(n);return 0;
}
