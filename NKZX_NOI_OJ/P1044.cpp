#include<cstdio>
int v[3]={0,4,7};
bool test(int n,int values[],int index){
    bool available[3] = {0,1,1};
    if(index == 0) available[0] = 1;
    if(index == 1 && values[0] == 0)
        available[0] = 1;
    for(int i=0;i<3;i++){
        if(available[i]){
            values[index] = v[i];
        }else{
            continue;
        }
        if(index == 2){
            if(n%(values[0]*100+values[1]*10+values[2]) == 0){
                return true;
            }
        }
        else
            if(test(n,values,index+1)){
                return true;
            }
    }
    return false;
}
int main(){
    int n;
    scanf("%d",&n);
    int vs[3]={};
    if(test(n,vs,0))
        printf("YES");
    else
        printf("NO");
    return 0;
}
