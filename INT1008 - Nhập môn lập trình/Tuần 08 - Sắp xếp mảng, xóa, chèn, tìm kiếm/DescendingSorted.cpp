// Sắp xếp giảm dần

#include <iostream>
using namespace std;

signed main() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }

  for (int i = 0; i < n; ++i) {
    for (int j = i+1; j < n; ++j) {
      if (a[j] > a[i]) {
        swap(a[i], a[j]);
      }
    }
    cout << a[i] << ' ';
  }
}