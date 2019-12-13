#include<cstdio>
int val[101];
int getValue(int index){
    int a=val[index],b=0;
    while(a){
        b*=10;
        b+=a%10;
        a/=10;
    }
    return b;
}
int main(){
    int x,y,n;
    scanf("%d%d",&x,&y);
    n = y-x+1;
    int vv=x;
    for(int i=0;i<n;i++){
        val[i]=vv++;
    }
    for(int i=0;i<n;i++){
        for(int v=0;v<n-1;v++){
            if(getValue(v)>getValue(v+1)){
                int tmp = val[v];
                val[v] = val[v+1];
                val[v+1]=tmp;
            }
        }
    }
    for(int i=0;i<n;i++)
        printf("%d\n",val[i]);
    return 0;
}
