#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

signed main() {
  int n;
  cin >> n;
  vector<double> a(n);
  for (double &x : a) cin >> x;
  double k;
  cin >> k;

  if (k > a[n-1]) {
    a.emplace_back(k);
  } else {
    for (int i = 0; i < n; ++i) {
      if (k < a[i]) {
        a.insert(a.begin() + i, k);
        break;
      }
    }
  }
  cout << fixed << setprecision(2);
  for (double x : a) cout << x << ' ';
}