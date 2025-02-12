#include <iostream>
#include <iomanip>
using namespace std;

signed main() {
  const int MAXN = 1000;
  double a[MAXN], b[MAXN];

  int n;
  cin >> n;

  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  for (int i = 0; i < n; ++i) {
    cin >> b[i];
  }
  double dotProduct = 0;
  for (int i = 0; i < n; ++i) {
    dotProduct += a[i] * b[i];
  }
  cout << fixed << setprecision(2);
  cout << dotProduct;
}