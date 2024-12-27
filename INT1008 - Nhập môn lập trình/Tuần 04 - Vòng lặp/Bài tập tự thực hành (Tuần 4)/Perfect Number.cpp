#include <iostream>
using namespace std;

signed main() {
  int n;
  cin >> n;
  int s = 0;
  for (int i = 1; i*i <= n; ++i) {
    if (n % i == 0) {
      s += i;
      if (i != n / i) {
        s += n / i;
      }
    }
  }
  cout << (2*n == s? "yes" : "no");
}