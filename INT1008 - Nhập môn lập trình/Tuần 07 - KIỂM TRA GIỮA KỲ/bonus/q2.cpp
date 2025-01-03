#include <iostream>
using namespace std;

signed main() {
  int n;
  cin >> n;
  
  int a[n+2];
  a[0] = a[n+1] = 2e9;
  for (int i = 1; i <= n; ++i) {
    cin >> a[i];
  }

  int sum = 0;
  for (int i = 1; i <= n; ++i) {
    if (a[i] < a[i-1] && a[i] < a[i+1]) {
      sum += a[i];
    }
  }

  cout << sum;
}