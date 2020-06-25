#include<cstdio>
#include<cstring>
struct Node{
    Node *firstChild;
    Node *brother;
    char value;
    bool isTerminal;
};
Node root;
Node* findOrCreate(Node *target,char targetChar) {
    Node *sub = target -> firstChild;
    if(sub == NULL) {
        sub = target -> firstChild = new Node;
        sub->value = targetChar;
        sub->firstChild = sub-> brother = NULL;
        sub->isTerminal = false;
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
        sub->isTerminal = false;
        return sub;
    }
}
void add(char *sequence,int i,int length) {
    Node *target = &root;
    for(;i < length;i++) {
        target = findOrCreate(target,sequence[i]);
    }
    target->isTerminal = true;
}
Node* find(Node *target,char targetChar) {
    Node *sub = target->firstChild;
    while(sub != NULL) {
        if(sub->value == targetChar) {
            return sub;
        }
        sub = sub -> brother;
    }
    return NULL;
}
bool find(char *sequence,int i,int length) {
    Node *target = &root;
    for(;i < length;i++) {
        target = find(target,sequence[i]);
        if(target == NULL) {
            return false;
        } 
    }
    if(target -> isTerminal) {
        return true;
    }
}
char name[256];
int main() {
    int n;
    char str[5];
    scanf("%d",&n);
    for(int i = 0;i < n;i++) {
        scanf("%s",str);
        gets(name);
        int length = strlen(name);
        if(str[0] == 'a') {
            add(name,0,length);
        }else{
            if(find(name,0,length)) {
                puts("yes");
            } else {
                puts("no");
            }
        }
    }
    return 0;
}
