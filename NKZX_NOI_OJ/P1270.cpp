#include<cstdio>
#include<vector>
using namespace std;
struct Node{
    int time;
    vector<int> p;
}node[100100];
int state[100100];
int start,curr;
int count = 0;
int nextInt() {
    int r = 0;
    char c = getchar();
    while(c < '0' || c > '9') c = getchar();
    while(c >= '0' && c <= '9') r = (r << 3) + (r << 1) + (c - '0'),c = getchar();
    return r;
}
void advanceStart(int time){
    while(start < curr && time - node[start].time >= 86400) {
        for(int i = 0;i < node[start].p.size();i++) {
            int v = node[start].p[i];
            state[v]--;
            if(state[v] == 0)
                count--;
        }
        start++;
    }
}
int main(){
    int n = nextInt();
    for(curr = 0;curr < n;curr++) {
        node[curr].time = nextInt();
        advanceStart(node[curr].time);
        int k = nextInt();
        for(int j = 0;j < k;j++) {
            int v = nextInt();
            node[curr].p.push_back(v);
            state[v]++;
            if(state[v] == 1)
                count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
