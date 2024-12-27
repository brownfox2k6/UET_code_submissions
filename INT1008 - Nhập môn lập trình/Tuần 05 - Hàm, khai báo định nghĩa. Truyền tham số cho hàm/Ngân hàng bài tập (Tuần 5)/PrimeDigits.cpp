#include <iostream>
using namespace std;

signed main() {
  int t;
  for (cin >> t; t--; ) {
    string s;
    cin >> s;
    int ret = 0;
    for (int i = 0; i < int(s.length()); ++i) {
      ret += (s[i] == '2' || s[i] == '3' || s[i] == '5' || s[i] == '7');
    }
    cout << ret << '\n';
  }
}