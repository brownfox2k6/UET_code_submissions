// Sắp xếp giảm dần

#include <iomanip>
#include <iostream>
using namespace std;

signed main() {
  int n;
  cin >> n;
  double a[n];
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }

  cout << fixed << setprecision(2);
  for (int i = 0; i < n; ++i) {
    for (int j = i+1; j < n; ++j) {
      if (a[j] > a[i]) {
        swap(a[i], a[j]);
      }
    }
    cout << a[i] << ' ';
  }
}