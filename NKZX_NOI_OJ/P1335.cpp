#include<cstdio>
int r[20100]={0,0,1};
char ans[210];
int n,w=3;
int main(){
    scanf("%d %s",&n,ans);
    for(int i = 0;i < n;i++){
        int a,b,c,d,x;
        scanf("%d%% %d%% %d%% %d%%",&a,&b,&c,&d);
        switch(ans[i]){
            case 'A':x=a;break;
            case 'B':x=b;break;
            case 'C':x=c;break;
            case 'D':x=d;break;
        }
        if(x == 0){
            puts("0");
            return 0;
        }
        int u = 0;
        for(int j = 0;j < w;j++){
            int v = (r[j] * x + u);
            r[j] = v % 10;
            u = v / 10;
        }
        int j = w;
        while(u){
            int v = (r[j] + u);
            r[j] = v % 10;
            u = v / 10;
            j++;
        }
        w+=2;
    }
    int min = 0;
    while(r[min] == 0 && min < w)
        min++;
    if(w - 1 == min){
        puts("1");
        return 0;
    }else{
        w--;
        printf("0.");
    }
    for(int i = w - 1;i >= min;i--)
        putchar('0' + r[i]);
    return 0;
}
