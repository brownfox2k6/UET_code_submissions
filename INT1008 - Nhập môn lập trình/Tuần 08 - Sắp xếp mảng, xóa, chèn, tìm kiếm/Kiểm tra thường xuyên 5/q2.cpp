#include <iostream>
using namespace std;

signed main() {
  int n, m;
  cin >> n >> m;
  int Max[m];
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      int aij;
      cin >> aij;
      if (i == 0) {
        Max[j] = aij;
      } else {
        Max[j] = max(Max[j], aij);
      }
    }
  }
  for (int i = 0; i < m; ++i) {
    cout << Max[i] << ' ';
  }
}