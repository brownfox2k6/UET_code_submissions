#include <iostream>
using namespace std;

signed main() {
  int m, n, q;
  cin >> m >> n >> q;
  int a[m+1][n+1];
  for (int i = 1; i <= m; ++i) {
    for (int j = 1; j <= n; ++j) {
      cin >> a[i][j];
    }
  }
  while (q--) {
    int i, j;
    cin >> i >> j;
    cout << a[i][j] << '\n';
  }
}