// Vòng lặp cơ bản

#include <iostream>
using namespace std;

signed main() {
  int n;
  cin >> n;
  int s = 0;
  for (int i = 1; i <= n; ++i) {
    s += i;
  }
  cout << s;
}