#include <iostream>
using namespace std;

signed main() {
  int n, m;
  cin >> n >> m;
  for (int i = 0; i < (1 << (n + m)); ++i) {
    if (__builtin_popcount(i) == m) {
      for (int bit = n+m-1; bit >= 0; --bit) {
        cout << (i & (1 << bit)? 1 : 0);
      }
      cout << '\n';
    }
  }
}