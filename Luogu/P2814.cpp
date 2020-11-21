#include<iostream>
#include<string>
#include<map>
using namespace std;
int alloc, fa[51000];
map<string, int> ids;
map<int, string> names;
int id(string name) {
	int o = ids[name];
	if (o == 0) {
		o = ids[name] = ++alloc;
		fa[o] = o;
		names[o] = name;
	}
	return o;
}
int find(int x) {
	return fa[x] = (fa[x] == x ? x : find(fa[x]));
}
void merge(int x, int y) {
	x = find(x);
	y = find(y);
	if (x != y) {
		fa[y] = x;
	}
}
int main() {
	string s;
	int par = 0;
	while (cin >> s) {
		char cmd = s[0];
		s = s.substr(1);
		switch (cmd) {
			case '#':
				par = id(s);
				break;
			case '+':
				merge(par, id(s));
				break;
			case '?':
				cout << s << " " << names[find(id(s))] << endl;
				break;
			case '$':
				goto label;
		}
	}
	label:
	return 0;
}
