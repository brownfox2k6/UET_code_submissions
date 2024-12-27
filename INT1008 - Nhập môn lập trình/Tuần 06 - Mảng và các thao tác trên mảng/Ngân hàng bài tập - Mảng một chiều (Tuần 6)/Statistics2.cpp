#include <iostream>
#include <iomanip>
using namespace std;

signed main() {
  int n;
  cin >> n;
  int m = n;
  double tb = 0;
  int mx = -100000;
  int mn = 1000000;
  for ( ; n--; ) {
    int x;
    cin >> x;
    tb += x;
    mx = max(mx, x);
    mn = min(mn, x);
  }
  cout << fixed << setprecision(2);
  tb /= m;
  cout << (tb == 0? 0 : tb) << '\n' << mx << '\n' << mn;
}