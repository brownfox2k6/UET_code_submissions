#include <iostream>
using namespace std;

signed main() {
  int n = 5;
  for (int i = 0; i < n; ++i) {
    int j;
    cin >> j;
    string s(n, '*');
    s[j] = 'Q';
    for (char c : s) {
      cout << c << ' ';
    }
    cout << '\n';
  }
}
