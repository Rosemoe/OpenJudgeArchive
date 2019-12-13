#include<cstdio>
struct stu{
    int sum,ch,ma,en,in;
}stus[301];
inline bool compare(const int i1,const int i2){
    if(stus[i1].sum<stus[i2].sum){
        return true;
    }
    else if(stus[i1].sum==stus[i2].sum){
        if(stus[i1].ch<stus[i2].ch){
            return true;
        }else if(stus[i1].ch==stus[i2].ch && stus[i1].in>stus[i2].in){
            return true;
        }
    }
    return false;
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d%d%d",&stus[i].ch,&stus[i].ma,&stus[i].en);
        stus[i].in=i+1;stus[i].sum=stus[i].ch+stus[i].ma+stus[i].en;
    }
    for(int v1=0;v1<n;v1++){
        bool changed = false;
        for(int v2=0;v2<n-v1-1;v2++){
            if(compare(v2,v2+1)){
                stu v3 = stus[v2];
                stus[v2] = stus[v2+1];
                stus[v2+1]=v3;
                changed=true; 
            }
        }
        if(!changed) break;
    }
    for(int i=0;i<5;i++){
        printf("%d %d",stus[i].in,stus[i].sum);putchar('\n');
    }
    return 0;
}
