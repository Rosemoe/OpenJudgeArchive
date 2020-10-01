#include<cstdio>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
bool isPrime(const int v) {
	if(v == 1) return 0;
	if(v == 2) return 1;
	const int max = sqrt(v);
	for(int i = 2;i <= max;i++) {
		if(v % i == 0) {
			return 0;
		}
		if(i >= 3) {
			i++;
		}
	}
	return 1;
}
int main() {
	int min,max,ans=0;
	vector<int> all;
	scanf("%d%d",&min,&max);
	for(int i = 1;i <= 99999;i++) {
		int copy = i;
		int shift = 1;
		long long reverse = 0;
		while(copy) {
			reverse = reverse * 10 + copy % 10;
			shift *= 10;
			copy /= 10;
		}
		long long result = reverse * shift + i;
		if(result % 10 != 0 && result >= min && result <= max && result & 1 && isPrime(result)) {
			all.push_back(result);
		}
		result = reverse / 10 * shift + i;
		if(result % 10 != 0 && result >= min && result <= max && result & 1 && isPrime(result)) {
			all.push_back(result);
		}
		int shift2 = 1;
		while(result <= max) {
			result = reverse * 10 * shift2 * shift + i;
			if(result % 10 != 0 && result >= min && result <= max && result & 1 && isPrime(result)) {
				all.push_back(result);
			}
			shift2 *= 100;
		}
	}
	sort(all.begin(),all.end());
	for(int i = 0;i < all.size();i++) {
		printf("%d\n",all.at(i));
	}
	return 0;
}
