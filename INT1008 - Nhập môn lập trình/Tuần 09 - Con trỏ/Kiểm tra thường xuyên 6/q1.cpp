#include <iostream>
#include <iomanip>
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
      if (a[j] < a[i]) {
        swap(a[i], a[j]);
      }
    }
  }

  cout << fixed << setprecision(1);
  cout << (a[n/2] + a[(n-1)/2]) / 2.0;
}
