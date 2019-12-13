#include<cstdio>
int main(){
    int n,ct1=0,ct2=0,v=0,m;char c;
    scanf("%d",&n);
    for(int i=0;i<n;){
        scanf("%c",&c);
        if(c=='C'){
            ct1++;
            scanf("%*s");
            i++;
        }else if(c=='N'){
            scanf("%d",&m);
            v+=m;
            ct2++;
            i++;
        }
    }
    printf("%d %d",ct1,ct2==0?0:v/ct2);
    return 0;
}
