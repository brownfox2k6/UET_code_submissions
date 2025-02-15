#include <iomanip>
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

signed main() {
  int a, b, c;
  cin >> a >> b >> c;

  int mn = min(a, min(b, c));
  int mx = max(a, max(b, c));
  int r = a + b + c - mx - mn;
  cout << mx << ' ' << r << ' ' << mn;
}