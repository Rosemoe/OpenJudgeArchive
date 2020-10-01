#include<iostream>
#include<algorithm>
using namespace std;
struct M{
	int height;
	int cost;
}v[5010];
int compare(M a,M b) {
	return a.cost < b.cost;
}
int main() {
	int n,s,a,b,h,k=0;
	cin >> n >> s >> a >> b;
	h = a + b;
	for(int i = 0;i < n;i++) {
		cin >> v[i].height >> v[i].cost;
	}
	sort(v,v+n,compare);
	for(int i = 0;i < n;i++) {
		if(s >= v[i].cost && a + b >= v[i].height) {
			s -= v[i].cost;
			k++;
		}
	}
	cout << k;
	return 0;
}
