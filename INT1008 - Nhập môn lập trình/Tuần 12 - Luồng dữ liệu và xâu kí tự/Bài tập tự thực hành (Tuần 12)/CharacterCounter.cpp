#include <cstring>

int count(char s[], char c) {
  int cnt = 0;
  for (int i = 0; i < int(strlen(s)); ++i) {
    cnt += s[i] == c;
  }
  return cnt;
}