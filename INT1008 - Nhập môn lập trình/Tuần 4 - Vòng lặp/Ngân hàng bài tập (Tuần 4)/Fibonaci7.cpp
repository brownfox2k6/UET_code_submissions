#include <iostream>
using namespace std;

signed main() { 
  int n;
  cin >> n;

  long long a = 1;
  long long b = 1;
  for (int i = 0; i < n-1; ++i) {
    long long c = 2 * b + a + 1;
    a = b;
    b = c;
  }

  cout << b;
}