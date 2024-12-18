#include <cstring>

void reverse(char *s) {
  int sz = strlen(s);
  for (int i = 0; i < sz / 2; ++i) {
    char t = s[i];
    s[i] = s[sz - i - 1];
    s[sz - i - 1] = t;
  }
}