#include <iomanip>
#include <iostream>
using namespace std;

signed main() {
  int n;
  cin >> n;
  double a[n];
  for (double &x : a) {
    cin >> x;
  }

  double s = 0;
  for (double x : a) {
    s += x;
  }

  double tb = double(s) / n;
  double ps = 0;
  for (double x : a) {
    ps += (x - tb) * (x - tb);
  }
  ps /= n;

  cout << fixed << setprecision(2);
  cout << tb << ' ' << ps;
}