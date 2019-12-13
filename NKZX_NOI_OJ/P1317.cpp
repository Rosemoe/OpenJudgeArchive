#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
//#include<bits/stdc++.h>
string strs[100001];
int n;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for(int i = 0;i < n;i++)
        cin >> strs[i];
    sort(strs,strs + n);
    for(int i = 0;i < n;i++)
        cout << strs[i] << '\n';
    return 0;
}
