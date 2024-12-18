#include <cstring>

void trim_left(char *s) {
  int sz = strlen(s);
  for (int i = 0; i < sz; ++i) {
    if (s[i] != ' ') {
      for (int j = 0; j < sz - i; ++j) {
        s[j] = s[j + i];
      }
      s[sz - i] = '\0';
      return;
    }
  }
}