#include <iomanip>
#include <iostream>
using namespace std;

signed main() {
  int n;
  cin >> n;
  int p = 1;
  double ret = 0;
  for (int i = 1; i <= n; ++i) {
    p *= i;
    ret += 1.0 / p;
  }
  cout << fixed << setprecision(5);
  cout << ret;
}