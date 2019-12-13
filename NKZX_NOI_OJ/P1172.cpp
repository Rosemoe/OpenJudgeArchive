#include<cstdio>
int main(){
    char a[11];
    scanf("%s",a);
    int lostI=10,v=0;
    for(int i=0;i<11;i++){
        if(a[i]=='?'){
            lostI = i;
            continue;
        }
        v += (a[i]!='X'?(a[i]-'0'):10) * (10-i);
    }
    int v2 = 0,r=-1;
    for(;v2 <= (lostI==9?10:9);v2++){
        if((v+v2*(10-lostI)) % 11 == 0){
            r = v2;
            break;
        }
    } 
    if(r==10)
        printf("X");
    else
        printf("%d",r);
     
    return 0;
}
