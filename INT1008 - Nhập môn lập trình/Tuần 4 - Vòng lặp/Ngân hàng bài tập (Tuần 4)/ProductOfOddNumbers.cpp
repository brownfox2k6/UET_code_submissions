#include <iostream>
using namespace std;

signed main() {
  int n;
  cin >> n;
  long long p = 1;
  for (int i = 1; i <= 2*n + 1; i += 2) {
    p *= i;
  }
  cout << p;
}