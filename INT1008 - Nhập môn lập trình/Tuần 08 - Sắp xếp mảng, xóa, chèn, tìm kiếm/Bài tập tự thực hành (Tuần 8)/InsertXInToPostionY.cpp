#include <iostream>
using namespace std;

signed main() {
  int n;
  cin >> n;
  int a[1005];
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }

  // insert
  int x, y;
  cin >> x >> y;
  --y;
  for (int i = n-1; i >= y; --i) {
    a[i+1] = a[i];
  }
  a[y] = x;

  for (int i = 0; i <= n; ++i) {
    cout << a[i] << ' ';
  }
}
