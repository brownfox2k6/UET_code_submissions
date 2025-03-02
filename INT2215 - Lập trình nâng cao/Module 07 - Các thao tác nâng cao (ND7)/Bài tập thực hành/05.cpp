#include <iostream>
using namespace std;

signed main() {
  int n;
  cin >> n;
  for (int i = 0; i < (1 << n); ++i) {
    for (int bit = n-1; bit >= 0; --bit) {
      cout << (i & (1 << bit)? 1 : 0);
    }
    cout << '\n';
  }
}