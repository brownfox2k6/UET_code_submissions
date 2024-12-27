#include <iostream>
#include <iomanip>
using namespace std;

signed main() {
  double a[6];
  for (int i = 0; i < 6; ++i) {
    cin >> a[i];
  }

  double Max = -1000;
  double Min = 1000;
  double Sum = 0;
  for (int i = 0; i < 6; ++i) {
    Max = max(Max, a[i]);
    Min = min(Min, a[i]);
    Sum += a[i];
  }
  cout << fixed << setprecision(1);
  cout << (Sum - Max - Min) / 4;
}