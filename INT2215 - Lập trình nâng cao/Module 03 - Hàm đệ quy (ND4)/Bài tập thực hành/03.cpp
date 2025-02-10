#include <iostream>
using namespace std;

int sum_digits(int n) {
  if (n == 0) {
    return 0;
  }
  return n % 10 + sum_digits(n / 10);
}

signed main() {
  int n;
  cin >> n;
  cout << sum_digits(n);
}