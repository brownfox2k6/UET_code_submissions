#include <iostream>
#include <iomanip>
using namespace std;

signed main() {
  const int MAXN = 1000;
  double a[MAXN];

  int n;
  cin >> n;

  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  cout << fixed << setprecision(2);
  for (int i = n-1; i >=0; --i) {
    cout << a[i] << ' ';
  }
}