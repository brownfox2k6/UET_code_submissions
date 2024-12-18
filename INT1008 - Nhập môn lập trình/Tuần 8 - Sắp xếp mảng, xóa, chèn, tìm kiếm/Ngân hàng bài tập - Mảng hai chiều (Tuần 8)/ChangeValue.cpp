#include <iostream>
using namespace std;

signed main() {
  int n, m;
  cin >> n >> m;
  
  int a[n][m];
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      cin >> a[i][j];
    }
  }

  {
    int i, j, k;
    cin >> i >> j >> k;
    a[i-1][j-1] = k;
  }

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      cout << a[i][j] << ' ';
    }
    cout << '\n';
  }
}