#include<cstdio>
#include<iostream>
#include<cstring>
#define ull unsigned long long
using namespace std;
struct Node{
    Node *firstChild;
    Node *brother;
    char value;
    int subCount;
    int depth;
};
ull ans = 0;
Node root;
Node* findOrCreate(Node *target,char targetChar) {
    Node *sub = target -> firstChild;
    if(sub == NULL) {
        sub = target -> firstChild = new Node;
        sub->value = targetChar;
        sub->firstChild = sub-> brother = NULL;
        sub -> subCount = 0;
        sub -> depth = target -> depth + 1;
        return sub;
    } else {
        Node *last = sub;
        while(sub != NULL) {
            if(sub->value == targetChar) {
                return sub;
            }
            last = sub;
            sub = sub -> brother;
        }
        sub = last->brother = new Node;
        sub->value = targetChar;
        sub->firstChild = sub-> brother = NULL;
        sub -> subCount = 0;
        sub -> depth = target -> depth + 1;
        return sub;
    }
}
void add(char *sequence,int length) {
    Node *target = &root;
    for(int i = 0;i < length;i++) {
        target = findOrCreate(target,sequence[i]);
        target -> subCount ++;
        ull x = (ull)target -> subCount * target -> depth;
        if(x > ans) {
            ans = x;
        }
    }
}
char name[20100];
int main() {
    int k;
    cin >> k;
    root.depth = 0;
    getchar();
    for(int i = 0;i < k;i++) {
        gets(name);
        add(name,strlen(name));
    }
    cout << ans;
    return 0;
}
