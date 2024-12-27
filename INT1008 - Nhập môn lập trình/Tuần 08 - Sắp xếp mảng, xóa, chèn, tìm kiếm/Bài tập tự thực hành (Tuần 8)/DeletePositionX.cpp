#include <iostream>
using namespace std;

signed main() {
  int n;
  cin >> n;
  int a[1005];
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }

  // delete
  int x;
  cin >> x;
  for (int i = x; i < n; ++i) {
    a[i-1] = a[i];
  }

  for (int i = 0; i <= n-2; ++i) {
    cout << a[i] << ' ';
  }
}
