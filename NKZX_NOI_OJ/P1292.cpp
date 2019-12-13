#include <cstdio>
char stack[256];
int main() {
  char str[256];
  scanf("%s", str);
  int j = 0;
  for (int i = 0; i < 256; i++) {
      if (str[i] == '\0') {
        break;
      }
      switch (str[i]) {
      case '(':
        stack[j++] = ')';
        break;
      case '[':
        stack[j++] = ']';
        break;
      case ')':
      case ']':
        if (j != 0 && stack[j - 1] == str[i]) {
          j--;
        } else {
          printf("Wrong");
          return 0;
        }
        break;
        }
  }
  printf(j == 0 ? "OK" : "Wrong");
  return 0;
}
