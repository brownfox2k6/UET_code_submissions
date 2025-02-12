#include <iostream>
#include <iomanip>
using namespace std;

signed main() {
  const int MAXN = 1000;
  double a[MAXN];

  int n;
  cin >> n;

  double sum = 0;
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
    sum += a[i];
  }
  double mean = sum / n;
  sum = 0;
  for (int i = 0; i < n; ++i) {
    sum += (a[i] - mean) * (a[i] - mean);
  }
  double var = sum / n;
  cout << fixed << setprecision(2);
  cout << var;
}