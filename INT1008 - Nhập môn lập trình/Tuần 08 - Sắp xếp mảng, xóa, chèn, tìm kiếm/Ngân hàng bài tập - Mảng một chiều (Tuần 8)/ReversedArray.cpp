#include <iomanip>
#include <iostream>
using namespace std;

signed main() {
  int n;
  cin >> n;
  double a[n];
  for (double &x : a) cin >> x;
  
  cout << fixed << setprecision(2);
  for (int i = n-1; i >= 0; --i) {
    cout << a[i] << ' ';
  }
}