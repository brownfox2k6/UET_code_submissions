#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

signed main() {
  int n;
  cin >> n;
  vector<double> a(n);
  for (double &x : a) cin >> x;

  for (int i = 0; i < n-1; ++i) {
    for (int j = i+1; j < n; ++j) {
      if (a[j] > a[i]) {
        swap(a[i], a[j]);
      }
    }
  }
  cout << fixed << setprecision(2);
  for (double x : a) cout << x << ' ';
}