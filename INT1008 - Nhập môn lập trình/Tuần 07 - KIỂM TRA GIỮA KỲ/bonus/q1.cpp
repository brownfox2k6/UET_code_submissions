#include <iostream>
using namespace std;

signed main() {
  int m, n;
  cin >> m >> n;

  for (int i = 0; i < m; ++i) {
    int best = -1e9;
    for (int j = 0; j < n; ++j) {
      int x;
      cin >> x;
      best = max(best, x);
    }
    cout << best << ' ';
  }
}