#include<cstdio>
#include<unordered_map>
std::unordered_map<int,int> map;
int num[100010];
int main(){
    int n,x,c,r = 0;
    scanf("%d",&n);
    for(int i = 0;i < n;i++){
        scanf("%d",&c);
        num[i] = c;
        map[c] = 1;
    }
    scanf("%d",&x);
    for(int i = 0;i < n;i++){
        c = num[i];
        if(map[c] && x - c > 0 && map[x - c] && c != x - c){
            map[c] = 0;
            map[x - c] = 0;
            r++;
        }
    }
    printf("%d",r);
    map.clear();
    return 0;
}
