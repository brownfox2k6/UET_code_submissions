#include <cstring>

void pad_left(char *s, int n) {
  int sz = strlen(s);
  if (sz >= n) {
    return;
  }
  for (int i = sz - 1; i >= 0; --i) {
    s[n - sz + i] = s[i];
  }
  for (int i = 0; i < n - sz; ++i) {
    s[i] = '_';
  }
  s[n] = '\0';
}