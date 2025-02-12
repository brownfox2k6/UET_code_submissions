#include <iostream>
#include <iomanip>
using namespace std;

signed main() {
  int x;
  cin >> x;
  
  double val = 1;
  double sum = 1;
  for (int i = 1; ; ++i) {
    val *= 1.0 * x / i;
    sum += val;
    if (val <= 0.001) {
      break;
    }
  }
  cout << fixed << setprecision(4);
  cout << sum;
}