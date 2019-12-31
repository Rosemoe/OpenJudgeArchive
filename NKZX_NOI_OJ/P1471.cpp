#include<cstdio>
int p[30]; 
int main(){
    int count,n,m;
    scanf("%d",&count);
    for(int i = 1;i <= count;i++){
        scanf("%d",&m);
        p[i] = (m == 1 ? 1 : 2); 
    }
    scanf("%d",&n);
    int t = count;
    int j = 1;
    int c = 1;
    while(t > 1) {
        if(c == n){
            if(p[j]) {
                p[j]--;
                if(!p[j]){
                    t--;
                }
                c = 1;
            }
            j++;
        }else{
            if(p[j]){
                c++;
            }
            j++;
        }
        if(j > count) {
            j = 1;
        }
    }
    for(int i = 1;i <= count;i++){
        if(p[i]) {
            printf("%d ",i);
        }
    }
    return 0;
} 
