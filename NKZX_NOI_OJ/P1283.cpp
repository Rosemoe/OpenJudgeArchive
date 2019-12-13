#include<cstdio>
int main() {
  char *s = new char[2048];
  scanf("%s", s);
  s[0] = s[1] = s[2] = 'a';
  printf("%s", s);
  delete[] s;
  return 0;
}
