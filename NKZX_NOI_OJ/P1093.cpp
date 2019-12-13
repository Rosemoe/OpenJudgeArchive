#include<cstdio>
bool a[1001];
int main(){
    int m,s,n,k,h=0,di=1,i,count=0;
    scanf("%d%d%d%d",&m,&s,&n,&k);
    i=s;
    while(count != m){
        if(i < 1){
            i = m;
            di = -1;
        }
        if(i>m){
            i = 1;
            di = 1;
        }
        if(a[i]==0){
            h++;
            if((h==n&&di==1)||(h==k&&di==-1)){
                a[i]=1;
                di=-di;
                printf("%d ",i);
                h=0;
            }
            count=0;
        }else{
            count++;
        }
        i+=di;
    }
} 
