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
  for (int i = 0; i < n; ++i) {
    int s = 0;
    for (int j = 0; j < m; ++j) {
      s += a[i][j];
    }
    cout << s << ' ';
  }
}