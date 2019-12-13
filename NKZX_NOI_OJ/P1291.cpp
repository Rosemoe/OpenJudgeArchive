#include<cstdio>
int stack1[10001],stack2[10001],n,top1=0,top2=0,i,c,m=0,action,count;
int main(){
    scanf("%d",&n);
    while(top2 < n){
        scanf("%d%d",&action,&count);
        if(action == 1)
            for(i = 0;i < count;i++) stack1[top1++] = ++m;
        else
            for(i = 0;i < count;i++) stack2[top2++] = stack1[--top1];
    }
    while(top2 > 0)
        printf("%d\n",stack2[--top2]);
    return 0;
} 
