#include<stdio.h>
int main() {
  double f,g;
  scanf("%lf%lf", &f,&g);
  printf("%0.2f %0.2f", 2*(f+g),f*g);
  return 0;
}
