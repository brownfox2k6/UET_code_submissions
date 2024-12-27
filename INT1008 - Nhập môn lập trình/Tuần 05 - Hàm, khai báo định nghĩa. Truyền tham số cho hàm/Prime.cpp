// Số nguyên tố

#include <iostream>
using namespace std;

bool p(int n) {
  for (int i = 2; i*i <= n; ++i) {
    if (n % i == 0) {
      return false;
    }
  }
  return n > 1;
}

signed main() {
  int n;
  cin >> n;
  cout << (p(n)? "Prime." : "Not a prime.");
}