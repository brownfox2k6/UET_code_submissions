#include <cstring>

void trim_right(char *s) {
  int sz = strlen(s);
  for (int i = sz-1; i >= 0; --i) {
    if (s[i] != ' ') {
      s[i+1] = '\0';
      return;
    }
  }
}