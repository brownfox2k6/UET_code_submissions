#include <cstring>

void pad_right(char *s, int n) {
  int sz = strlen(s);
  if (sz >= n) {
    return;
  }
  for (int i = sz; i < n; ++i) {
    s[i] = '_';
  }
  s[n] = '\0';
}
