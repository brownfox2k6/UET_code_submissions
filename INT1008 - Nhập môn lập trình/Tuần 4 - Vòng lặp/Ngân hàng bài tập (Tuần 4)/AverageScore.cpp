#include <iostream>
#include <iomanip>
using namespace std;

signed main() {
  int n;
  cin >> n;
  double ret = 0;
  for (int i = 0; i < n; ++i) {
    double p;
    cin >> p;
    ret += p;
  }
  cout << fixed << setprecision(2);
  cout << ret / n;
}