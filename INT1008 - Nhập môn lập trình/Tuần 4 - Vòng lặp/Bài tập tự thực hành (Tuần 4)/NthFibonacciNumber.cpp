#include <iostream>
using namespace std;

signed main() {
  long long a = 1;
  long long b = 1;
  int n;
  cin >> n;
  for (int i = 0; i < n - 2; ++i) {
    long long c = a + b;
    a = b;
    b = c;
  }

  cout << b;
}