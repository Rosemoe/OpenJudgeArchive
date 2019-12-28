#include<cstdio>
#include<algorithm>
struct Node{
    int value;
    int cache;
    bool exists;
}node[250];
int cmp(Node x,Node y){
    return x.value < y.value;
}
int main() {
    int n,m=0,c;
    scanf("%d",&n);
    while(scanf("%d",&c) == 1) {
        if(c == -1){
            break;
        }
        node[m].value = c;
        node[m].exists = 1;
        m++;
    }
    for(int i = 2;i <= n + 1;i++) {
        for(int j = 0;j < m;j++) {
            if(node[j].exists) {
                int copy = node[j].value;
                int k = 0,l,p;
                while(copy) {
                    l = copy % 10;
                    p = 1;
                    for(int q=0;q<i;q++){
                        p*=l;
                    }
                    k += p;
                    copy /= 10;
                }
                node[j].cache = k;
            }
        }
        for(int j = 0;j < m;j++){
            for(int k = 0;k < m;k++){
                if(node[j].cache == node[k].value) {
                    node[k].exists = 0;
                }
            }
        }
    }
    std::sort(node,node + m,cmp);
    for(int i = 0;i < m;i++){
        if(node[i].exists){
            printf("%d ",node[i].value);
        }
    }
    return 0;
}
