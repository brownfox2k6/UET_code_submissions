#include <iostream>
using namespace std;

signed main() {
  int t;
  for (cin >> t; t--; ) {
    string s;
    cin >> s;
    int n = s.length();
    for (int i = 0; i < n; ++i) {
      for (int j = i+1; j < n; ++j) {
        if (s[j] < s[i]) {
          swap(s[i], s[j]);
        }
      }
    }
    cout << s << '\n';
  }
}