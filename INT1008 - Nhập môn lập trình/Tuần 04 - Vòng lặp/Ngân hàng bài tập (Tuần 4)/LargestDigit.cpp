#include <iostream>
using namespace std;

signed main() {
  string s;
  cin >> s;
  char c = s[0];
  for (int i = 1; i < int(s.length()); ++i) {
    c = max(c, s[i]);
  }
  cout << c;
}