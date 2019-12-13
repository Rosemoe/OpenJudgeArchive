#include<cstdio>
#include<cmath>
int main() {
  int f, g, i, j;
  scanf("%d%d%d%d", &f, &g, &i, &j);
  printf("%0.2f", sqrt((f - i) * (f - i) + (g - j) * (g - j)));
  return 0;
}
