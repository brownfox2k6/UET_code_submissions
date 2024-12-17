#include <iostream>
using namespace std;

int sd(int n) {
  int s = 0;
  for (int i = 1; i*i <= n; ++i) {
    if (n % i == 0) {
      s += i;
      if (i != n / i) {
        s += n / i;
      }
    }
  }
  return s;
}

signed main() {
  int t;
  for (cin >> t; t--; ) {
    int n;
    cin >> n;
    cout << sd(n) << '\n';
  }
}