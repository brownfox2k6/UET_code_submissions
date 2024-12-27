#include <cstring>

void delete_char(char* s, char c) {
  char t[10000];
  int i = 0;
  for (int j = 0; j < int(strlen(s)); ++j) {
    if (s[j] != c) {
      t[i++] = s[j];
    }
  }
  for (int j = 0; j < i; ++j) {
    s[j] = t[j];
  }
  s[i] = '\0';
}