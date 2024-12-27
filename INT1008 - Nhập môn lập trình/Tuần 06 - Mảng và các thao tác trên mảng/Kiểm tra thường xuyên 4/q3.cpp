#include <iostream>
using namespace std;

signed main() {
  int n;
  cin >> n;
  int a[n];
  int mx = -1e9;
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
    for (int j = 0; j < i; ++j) {
      mx = max(mx, a[i] * a[j]);
    }
  }
  cout << mx;
}