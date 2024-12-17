#include <iostream>
using namespace std;

signed main() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
    if (a[i] >= 0) {
      cout << i + 1 << ' ';
    }
  }
}