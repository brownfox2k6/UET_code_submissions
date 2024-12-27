#include <iostream>
using namespace std;

signed main() {
  int n;
  cin >> n;

  long long s = 0;
  for (int i = 1; i <= n; ++i) {
    long long prod = 1;
    for (int j = 0; j < i; ++j) {
      prod *= i;
    }
    s += prod;
  }

  cout << s;
}