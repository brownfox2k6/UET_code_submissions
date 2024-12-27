#include <iostream>
using namespace std;

signed main() {
  int n;
  cin >> n;
  for (int i = 7; i <= n; i += 7) {
    cout << i << ' ';
  }
}