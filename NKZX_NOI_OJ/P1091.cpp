#include<cstdio>
#include<cmath>
int main(){
    int left,right,d,count=0;
    register int g,x,i,tmp;
    scanf("%d%d%d",&left,&right,&d);
    for(i=left;i<=right;i++){
        g = ceil(sqrt(i));
        bool f=0;
        for(x=2;x<=g;x++){
            if(i%x==0){
                f=1;
                break;
            }
        }
        if(f) continue;
        tmp=i;
        while(tmp){
            if(tmp%10==d){
                count++;
                break;
            }
            tmp/=10;
        }
    }
    printf("%d",count);
    return 0;
}
