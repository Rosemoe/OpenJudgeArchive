#include<cstdio>
const int max = 100100;
struct Node{
	int value;
	Node *next;
};
Node *nodes[max],*ends[max];
int main(){
	int m,k;
	scanf("%*d%d%d",&m,&k);
	for(int i = 0;i < k;i++){
		int line,column,value;
		scanf("%d%d%d",&line,&column,&value);
		Node *end = ends[column];
		Node *n = new Node;
		n->value = value;
		n->next = NULL;
		if(end == NULL){
			nodes[column] = n;
			ends[column] = n;
		}else{
			end->next = n;
			ends[column] = n;
		}
	}
	for(int i = 0;i <= m;i++) {
		while(nodes[i] != NULL) {
			printf("%d ",nodes[i]->value);
			nodes[i] = nodes[i]->next;
		}
	}
	return 0;
}
