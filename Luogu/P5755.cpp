#include<cstdio>
#include<iostream>
#include<cstring>
#define ull unsigned long long
using namespace std;
struct Node{
    Node *firstChild;
    Node *brother;
    char value;
};
ull ans = 1;
Node root;
Node* findOrCreate(Node *target,char targetChar) {
    Node *sub = target -> firstChild;
    if(sub == NULL) {
		ans++;
        sub = target -> firstChild = new Node;
        sub->value = targetChar;
        sub->firstChild = sub-> brother = NULL;
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
        ans++;
        sub = last->brother = new Node;
        sub->value = targetChar;
        sub->firstChild = sub-> brother = NULL;
        return sub;
    }
}
void add(char *sequence,int length) {
    Node *target = &root;
    for(int i = 0;i < length;i++) {
        target = findOrCreate(target,sequence[i]);
    }
}
char name[20100];
int main() { 
    while (scanf("%s", name)==1) {
		add(name, strlen(name));
    }
    cout << ans;
    return 0;
}
