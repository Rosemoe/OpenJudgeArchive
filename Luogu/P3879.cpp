#include<cstdio>
#include<cstring>
#define SIZE ('z' - 'a' + 1)
#define idx(a) (a - 'a')
struct value {
	value *next;
	int data;
};
struct Node {
	int sub[SIZE];
	value *head,*tail;
} nodes[5010000];
int allocated = 0;
void insert(char *str, int len,int name) {
	int curr = 0;
	for (int i = 0;i < len;i++) {
		int x = nodes[curr].sub[idx(str[i])];
		if (x == 0) {
			curr = nodes[curr].sub[idx(str[i])] = ++allocated;
		} else {
			curr = x;
		}
	}
	value *t;
	if (nodes[curr].head == 0) {
		t = nodes[curr].head = nodes[curr].tail = new value;
	} else {
		if (nodes[curr].tail -> data == name) {
			return;
		}
		t = new value;
		nodes[curr].tail->next = t;
		nodes[curr].tail = t;
	}
	t->data = name;
}
void find(char *str, int len) {
	int curr = 0;
	for (int i = 0;i < len;i++) {
		curr = nodes[curr].sub[idx(str[i])];
		if (curr == 0) {
			break;
		}
	}
	if (curr != 0) {
		value *t = nodes[curr].head;
		while (t != 0) {
			printf("%d", t -> data);
			if (t -> next == 0) {
				break;
			} else {
				t = t -> next;
				putchar(' ');
			}
		}
	}
	putchar('\n');
}
char buffer[1010];
int main() {
	int n,l,m;
	scanf("%d", &n);
	for (int i = 0;i < n;i++) {
		scanf("%d", &l);
		for (int j = 0;j < l;j++) {
			scanf("%s", buffer);
			insert(buffer, strlen(buffer), i + 1);
		}
	}
	scanf("%d", &m);
	for (int i = 0;i < m;i++) {
		scanf("%s", buffer);
		find(buffer, strlen(buffer));
	}
	return 0;
}
