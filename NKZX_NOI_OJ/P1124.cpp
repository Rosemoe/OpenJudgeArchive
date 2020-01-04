#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int cmp(string a,string b) {
	return a + b > b + a;
}
int main(){
	int n;
	string str[30];
	cin >> n;
	for(int i = 0;i < n;i++)
		cin >> str[i];
	sort(str,str + n,cmp);
	for(int i = 0;i < n;i++)
		cout << str[i];
    return 0;
}
