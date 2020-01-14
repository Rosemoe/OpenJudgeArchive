#include<cstdio>
struct Subway{
	short price;
	long long time;
	bool available;
}data[100100];
int start = 0,end = 0;
void cleanDatabase(long long currentTime) {
	while(start < end && (data[start].available == false || currentTime - data[start].time > 45)) {
		start++;
	}
}
long long nextLong() {
	long long r = 0;
	char c = getchar();
	while(c > '9' || c < '0') c = getchar();
	while(c >= '0' && c <= '9') r = (r << 3) + (r << 1) + (c - '0'),c = getchar();
	return r;
}
int main(){
    int n = nextLong();
    long long cost = 0;
	long long time,way,price;
    for(int i = 0;i < n;i++) {
    	way = nextLong();
    	price = nextLong();
    	time = nextLong();
    	if(way == 0) {
    		data[end].price = price;
    		data[end].time = time;
    		data[end].available = true;
    		end++;
    		cost = cost + price;
		} else {
			cleanDatabase(time);
			bool match = false;
			for(int k = start;k < end;k++) {
				if(data[k].available && data[k].price >= price) {
					data[k].available = false;
					match = true;
					break;
				}
			}
			if(!match) {
				cost = cost + price;
			}
		}
	}
	printf("%lld",cost);
    return 0;
}
