#include<cstdio>
#include<cmath>

const int CACHE_MAX = 2000;
struct Pair{
	bool isPrime;
	long long value;
	long long sign;
}cache[CACHE_MAX];
int cacheCount = 0;

inline long long isPrime(const long long n){
	const long long high = floor(sqrt(n));
	for(long long i = 2;i <= high;i++){
		if(i >= 4){
			i++;
		}
		if(n % i == 0){
			return i;
		}
	} 
	return -1;
}

inline bool isPrimeCached(const long long n){
	int local = cacheCount > CACHE_MAX ? CACHE_MAX : cacheCount;
	for(int i = 0;i < local;i++){
		if(cache[i].value == n){
			return cache[i].isPrime;
		}
	}
	long long sign = isPrime(n);
	cache[cacheCount % CACHE_MAX].isPrime = (sign == -1);
	cache[cacheCount % CACHE_MAX].value = n;
	cache[cacheCount % CACHE_MAX].sign = sign;
	cacheCount++;
	return sign == -1;
}

inline long long getSign(const long long n){
	int local = cacheCount > CACHE_MAX ? CACHE_MAX : cacheCount;
	for(int i = 0;i < local;i++){
		if(cache[i].value == n){
			return cache[i].sign;
		}
	}
}

inline int f(long long n){
	if(n == 1){
		return 0;
	}
	bool prime = isPrimeCached(n);
	if(prime){
		return 1;
	}else{
		long long sign = getSign(n);
		return f(sign) + f(n / sign);
	}
}

int main() {
	int n;
	long long c;
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		scanf("%lld",&c);
		printf("%d\n",f(c));
	}
    return 0;
}
