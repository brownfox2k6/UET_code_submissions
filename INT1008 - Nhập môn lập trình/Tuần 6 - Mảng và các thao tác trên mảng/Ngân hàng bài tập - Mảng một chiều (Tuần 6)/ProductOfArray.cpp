#include <iostream>
#include <iomanip>
using namespace std;

signed main() {
  int n;
  double s = 1;
  for (cin >> n; n--; ) {
    double x;
    cin >> x;
    s *= x;
  }
  cout << fixed << setprecision(2);
  cout << s;
}