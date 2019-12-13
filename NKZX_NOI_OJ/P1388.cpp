#include<cstdio>  
inline int fun(const int x,const int y){
	return (y == 0 ? x : fun(y,x % y));
}
int main(){
    int k,a,b,l,a1,b1,i,j;
    double s1,s2,s3;
    scanf("%d%d%d",&a,&b,&l);
    s1=a*1.0/b;s3=l*1.0;
    for(i=1;i<=l;i++){
        for(j=1;j<=l;j++){
            if(fun(i,j)==1){
                s2=i*1.0/j;
                if(s2>=s1&&s2-s1<s3){
                    a1=i;b1=j;s3=s2-s1;
                }
            }
        }
    }
    printf("%d %d",a1,b1);
    return 0;
}
