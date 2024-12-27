#include <iostream>
using namespace std;

signed main() {
  int t;
  for (cin >> t; t--; ) {
    int n;
    cin >> n;
    for (int i = n - 1; ; --i) {
      if (i % 2 && n % i == 0) {
        cout << i << '\n';
        break;
      }
    }
  }
}