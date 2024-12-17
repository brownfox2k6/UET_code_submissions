#include <iomanip>
#include <iostream>
using namespace std;

signed main() {
  int n, m;
  cin >> n >> m;
  double a[n][m];
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      cin >> a[i][j];
    }
  }
  int k;
  cin >> k;
  double s = 0;
  for (int i = 0; i < m; ++i) {
    s += a[k-1][i];
  }
  cout << fixed << setprecision(2);
  cout << s;
}