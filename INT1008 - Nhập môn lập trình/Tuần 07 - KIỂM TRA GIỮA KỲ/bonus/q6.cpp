#include <iostream>
using namespace std;

int swap_digits(int x) {
  string s = to_string(x);
  swap(s[0], s.back());
  return stoi(s);
}

signed main() {
  int m, n;
  cin >> m >> n;
  int lo = 2e9;
  int hi = -2e9;
  for (int i = 0; i < m*n; ++i) {
    int x;
    cin >> x;
    int y = swap_digits(x);
    lo = min(lo, y);
    hi = max(hi, y);
  }
  cout << lo + hi;
}