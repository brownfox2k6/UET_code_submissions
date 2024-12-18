#include <iostream>
using namespace std;

signed main() {
  int n;
  cin >> n;
  int a[n], b[n];
  for (int &x : a) cin >> x;
  for (int &x : b) cin >> x;

  for (int i = 0; i < n; ++i) {
    cout << a[i] << ' ' << b[i] << ' ';
  }
}