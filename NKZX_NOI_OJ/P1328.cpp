#include<cstdio>
int v[100];
bool check(int n,int u) {
    int l = 0,x = n;
    while(x) {
        v[l] = x % u;
        x /= u;
        l++;
    }
    for(int i=0,j=l-1;i<j;i++,j--){
        if(v[i]!=v[j])
            return 0;
    }
    return 1;
}
int main(){
    int a,b,min,max,c=0;
    scanf("%d%d%d%d",&a,&b,&min,&max);
    for(int i=a;i<=b;i++){
        int m = 0;
        for(int j=min;j<=max;j++){
            if(check(i*i,j))
                m++;
            if(m > 1)
                break;
        } 
        if(m == 1)
            c++;
    }
    printf("%d",c);
    return 0;
}
