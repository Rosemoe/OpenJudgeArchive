#include<string>
#include<iostream>
#include<algorithm>
using namespace std;
bool c(string a,string b){
    return b+a<a+b;
}
int main(){
    string nu[20];int n;
    cin >> n;
    for(int i=0;i<n;i++)
        cin >> nu[i];
    sort(nu,nu+n+1,c);
    for(int i=0;i<n;i++)
        cout<<nu[i];
    return 0;
}
