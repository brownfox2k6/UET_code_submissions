#include <iostream>
#include <cmath>
using namespace std;

signed main() {
  int a, b;
  cin >> a >> b;

  int lo = ceil(sqrt(a));
  int hi = sqrt(b);
  for (int i = lo; i <= hi; ++i) {
    cout << i * i << ' ';
  }
}