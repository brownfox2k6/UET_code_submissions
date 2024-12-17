#include <cstring>
#include <iostream>
using namespace std;

int main() {
  char s[100], t[100];
  cin >> s;
  cin >> t;
  // code cua ban o day
  int ret = 0;
  for (int i = 0; i < 100 && s[i] != '\0'; ++i) {
    ret += (s[i] == t[i]);
  }
  cout << ret;
  return 0;
}