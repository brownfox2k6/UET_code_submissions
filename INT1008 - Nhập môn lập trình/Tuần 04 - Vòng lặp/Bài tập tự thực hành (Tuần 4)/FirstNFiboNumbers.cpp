#include <iostream>
using namespace std;

signed main() {
  int n;
  cin >> n;

  int fib[n];
  for (int i = 0; i < n; ++i) {
    if (i < 2) {
      fib[i] = i;
    } else {
      fib[i] = fib[i-1] + fib[i-2];
    }
    cout << fib[i] << ' ';
  }
}