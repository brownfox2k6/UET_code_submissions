#include <iostream>
#include <iomanip>
using namespace std;

signed main() {
  int n;
  cin >> n;
  double a[n];
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
    a[i] *= a[i];
  }
  cout << fixed << setprecision(2);
  for (int i = n-1; i >= 0; --i) {
    cout << a[i] << ' ';
  }
}