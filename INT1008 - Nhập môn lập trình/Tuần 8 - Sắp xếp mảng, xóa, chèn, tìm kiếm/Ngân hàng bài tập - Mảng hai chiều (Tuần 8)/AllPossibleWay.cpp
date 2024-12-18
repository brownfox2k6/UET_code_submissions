#include <iostream>
using namespace std;

signed main() {
  int n;
  cin >> n;

  int a[n][n];
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      cin >> a[i][j];
    }
  }

  int k;
  cin >> k;
  int cnt1 = 0;
  int cnt2 = 0;
  for (int i = 0; i < n; ++i) {
    if (a[k-1][i]) {
      ++cnt1;
    }
    if (a[i][k-1]) {
      ++cnt2;
    }
  }
  cout << cnt1 << ' ' << cnt2;
}