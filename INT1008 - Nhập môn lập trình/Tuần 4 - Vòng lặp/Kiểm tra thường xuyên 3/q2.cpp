#include <iostream>
using namespace std;

signed main() {
  int m, k;
  cin >> k >> m;

  int n = m - k + 1;

  for (int i = 0; i < n % 5; ++i) {
    cout << k++ << ' ';
  }
  if (n % 5) {
    cout << '\n';
  }
  int out = 0;
  for ( ; k <= m; ++k) {
    ++out;
    cout << k << ' ';
    if (out == 5) {
      out = 0;
      cout << '\n';
    }
  }
}