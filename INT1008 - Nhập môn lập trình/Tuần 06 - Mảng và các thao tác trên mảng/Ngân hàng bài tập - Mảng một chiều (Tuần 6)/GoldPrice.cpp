#include <iostream>
#include <iomanip>
using namespace std;

signed main() {
  int n;
  cin >> n;
  double a[n];
  double mn = 123123131;
  double mx = -313213123;
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
    mn = min(mn, a[i]);
    mx = max(mx, a[i]);
  }

  cout << fixed << setprecision(2);
  cout << mx << ' ' << mn;
}