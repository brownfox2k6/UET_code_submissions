#include <iostream>
using namespace std;

signed main() {
  string s;
  getline(cin, s);
  int n = s.length();
  for (int i = 0; i < n; ) {
    if (s.substr(i, 4) == "Zues") {
      cout << "Zeus";
      i += 4;
    } else {
      cout << s[i++];
    }
  }
}