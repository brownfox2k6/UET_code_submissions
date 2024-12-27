#include <iostream>
using namespace std;

signed main() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }

  {
    int i, j;
    cin >> i >> j;
    swap(a[i-1], a[j-1]);
  }

  for (int i = 0; i < n; ++i) {
    cout << a[i] << ' ';
  }
}