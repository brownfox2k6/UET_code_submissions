// Xâu kí tự

#include <iostream>
using namespace std;

signed main() {
  string s, t;
  cin >> s >> t;
  int ret = 0;
  for (int i = 0; i < int(s.length()); ++i) {
    ret += s[i] == t[i];
  }
  cout << ret;
}