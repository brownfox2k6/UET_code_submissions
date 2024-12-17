#include <iostream>
using namespace std;

signed main() {
  int t;
  for (cin >> t; t--; ) {
    string s;
    cin >> s;
    int even = 0;
    int n = s.length();
    for (int i = 0; i < n; ++i) {
      if ((s[i] - '0') % 2 == 0) {
        even += 1;
      }
    }
    if (even == 0 || even == n) {
      cout << "yes";
    } else {
      cout << "no";
    }
    cout << '\n';
  }
}