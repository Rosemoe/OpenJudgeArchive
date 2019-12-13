#include<cstdio>
#include<cstring>
#include<vector>
using namespace std;
struct user{
    char *name;
    vector<char*> his;
};
vector<user*> v;
int main() {
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=0;i<m;i++){
        char *n=new char[1001],*h=new char[1001];
        scanf("%s%s",n,h);
        int t=-1;
        for(int j=0;j<v.size();j++){if(strcmp(v[j]->name,n)==0){t=j;break;}}
        if(t==-1){
            t=v.size();
            user *u = new user;
            u->name=n;
            v.push_back(u);
        }else{
            delete n;
        }
        user *u=v[t];
        u->his.push_back(h);
    }
    for(int i=0;i<v.size();i++){
        user *u=v[i];
        printf("%s",u->name);
        for(int j=0;j<u->his.size();j++){
            printf(" %s",u->his[j]);
        }
        putchar('\n');
    }
    return 0;
}
