#include<cstdio>
#define M 500
 
struct DataBlock {
    DataBlock *next;
    short value[M * 2 + 10];
    int count;
};
 
DataBlock *head;
 
DataBlock* create() {
    DataBlock *block = new DataBlock;
    block -> next = NULL;
    block -> count = 0;
    return block;
}
 
void insert(int index, short value) {
    DataBlock *target = head;
    //int g = 0;
    while(index > target -> count) {
        index -= target -> count;
        target = target -> next;
        //g++;
    }
    //printf("Insert to node %d\n", g);
    for(int i = target -> count + 1;i > index;i--) {
        target -> value[i] = target -> value[i - 1];
    }
    target -> value[index] = value;
    target -> count ++;
    if(target -> count >= M * 2) {
        //puts("Starting a department");
        DataBlock *insertion = create();
        insertion -> next = target -> next;
        target -> next = insertion;
        insertion -> count = target -> count - M;
        target -> count = M;
        for(int i = 0;i < insertion -> count;i++) {
            insertion -> value[i] = target -> value[M + i];
        }
    }
}
 
int main() {
    head = create();
    int n,pos,val;
    scanf("%d",&n);
    for(int i = 0;i < n;i++) {
        scanf("%d%d",&pos,&val);
        insert(pos, val);
    }
    DataBlock *block = head;
    while(block != NULL) {
        //puts("\nEnter a block");
        for(int i = 0;i < block -> count;i++) {
            printf("%d ", (int)block -> value[i]);
        }
        block = block -> next;
    }
    return 0;
}
