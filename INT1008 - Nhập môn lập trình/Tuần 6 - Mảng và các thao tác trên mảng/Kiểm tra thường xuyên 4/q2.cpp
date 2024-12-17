#include <iostream>
using namespace std;

signed main() {
  int n;
  cin >> n;
  int a = 0;
  int b = 0;
  for (int i = 0; i < n; ++i) {
    int x;
    cin >> x;
    a += x % 3 == 0;
    b += x % 2 == 0;
  }
  cout << a - b;
}