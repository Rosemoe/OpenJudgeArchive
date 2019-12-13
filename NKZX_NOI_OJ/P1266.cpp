#include<cstdio>
#include<vector>
using namespace std;
vector<int> v;
int main() {
    int c;
    while(scanf("%d",&c)==1&&c!=0) v.push_back(c);
    c=v.size();
    if(c%2==0){
        c/=2;printf("%d",v[c]+v[c-1]);
    }else{
        printf("%d",v[c/2]);
    }
    return 0;
}
