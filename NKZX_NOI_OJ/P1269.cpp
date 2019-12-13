#include<cstdio>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n,k,p,i=1;queue<int> q;vector<int> my;
    scanf("%d%d%d",&n,&k,&p);
    for(int x=1;x<=k;x++) q.push(x);
    while(q.size()>0){
        int nk=q.front(),c;
        q.pop();
        for(int j=1;j<=p;j++){c=q.front();q.pop();q.push(c);} 
        if(i==n){my.push_back(nk);i=0;}
        i++;
    }
    sort(my.begin(),my.end());
    for(i=0;i<my.size();i++){printf("%d\n",my[i]);}
    return 0;
}
