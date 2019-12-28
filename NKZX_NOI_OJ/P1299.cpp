#include<cstdio>
#include<cstring>
#include<algorithm>
struct Node{
    int value;
    int first;
    int second;
    Node *next;
};
const int MAX = 1000000;
Node *pairs[MAX],*ends[MAX];
int nums[1010];
inline int getHash(int target){
    return (target < 0 ? -target : target) % MAX;
}
void add(int element,int first,int second){
    int hash = getHash(element);
    if(ends[hash] == NULL){
        pairs[hash] = new Node;
        pairs[hash]->value = element;
        pairs[hash]->next = NULL;
        pairs[hash]->first = first;
        pairs[hash]->second = second;
        ends[hash] = pairs[hash];
    }else{
        Node *node = ends[hash];
        Node *_node = new Node;
        node->next = _node;
        _node->value = element;
        _node->next = NULL;
        _node->first = first;
        _node->second = second;
        ends[hash] = _node;
    }
}
int match(int value,int a,int b){
    Node *n = pairs[getHash(value)];
    while(n != NULL) {
        if(n->value == value && a != n->first && a != n->second && b != n->first && b != n->second)
            return 1;
        n = n->next;
    }
    return 0;
}
void doTask(int n){
    memset(pairs,0,sizeof(pairs));
    memset(ends,0,sizeof(ends));
    for(int i = 0;i < n;i++){
        scanf("%d",&nums[i]);
        for(int j = 0;j < i;j++) {
            add(nums[i] + nums[j],nums[i],nums[j]);
        }
    }
    std::sort(nums,nums + n);
    for(int i = n - 1;i >= 0;i--){
        for(int j = n - 1;j >= 0;j--){
            if(match(nums[i] - nums[j],nums[i],nums[j])){
                printf("%d\n",nums[i]);
                return;
            }
        }
    }
    puts("No Solution");
}
int main(){
    int n;
    while(true){
        scanf("%d",&n);
        if(n != 0){
            doTask(n);
        }else{
            break;
        }
    }
    return 0;
}
