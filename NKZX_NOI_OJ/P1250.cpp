#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
struct _p{
    int m,d;
    string na;
    void init(){cin>>na>>m>>d;}
    void p(){cout<<' '<<na;}
    bool operator< (const _p x)const{
        if(m<x.m) return true;
        if(m==x.m&&d<x.d) return true;
        if(m==x.m&&x.d==d)
            if(na.size()<x.na.size()) return true; else if(na.size()==x.na.size()) return na<x.na;
        return false;
    }
}stu[180];
int main(){
    int n,x=0,y=0,p=1,c=0;
    cin>>n;
    for(int i=0;i<n;i++) stu[i].init();
    std::sort(stu,stu+n);
    for(int i=0;i<n;i++){
        if(stu[i].m==x&&stu[i].d==y){
            if(c==0){
                if(p) p=0;
                else cout<<'\n';
                cout<<x<<' '<<y; 
                stu[i-1].p();
                c++;
            }
            stu[i].p();
        }else{
            x=stu[i].m;y=stu[i].d;c=0;
        }
    }
    if(p) cout<<"None";
    return 0;
} 
