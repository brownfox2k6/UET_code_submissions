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
    int b, c, d, e;
    cin >> b >> c >> d >> e;
    swap(a[b-1][c-1], a[d-1][e-1]);
  }

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      cout << a[i][j] << ' ';
    }
    cout << '\n';
  }
}