#include<cstdio>
char labels[17] = "0123456789abcdef";
void turn(int a, int b) {
  char s[256];
  int i = 0;
  while (a > 0) {
    s[i++] = labels[a % b];
    a = a / b;
  }
  for (i--; i >= 0; i--)
    putchar(s[i]);
}
int main() {
  int a;
  scanf("%d", &a);
  printf("Oct:");
  turn(a, 8);
  printf("\nHex:");
  turn(a, 16);
  return 0;
}
