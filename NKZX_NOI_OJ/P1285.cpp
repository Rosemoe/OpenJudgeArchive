#include<stdio.h>
int main() {
  int f,g = 0;
  scanf("%d", &f);
  for (int i = 0; i < 3; i++)
    g += f % 10, f /= 10;
  printf("%d", g);
  return 0;
}
