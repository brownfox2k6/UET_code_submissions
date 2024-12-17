#include <iomanip>
#include <iostream>
using namespace std;

signed main() {
  int n;
  cin >> n;
  double ret = 0;
  for (int i = 1; i <= n; ++i) {
    ret += 1.0 * i / (i + 1);
  }
  cout << fixed << setprecision(5);
  cout << ret;
}