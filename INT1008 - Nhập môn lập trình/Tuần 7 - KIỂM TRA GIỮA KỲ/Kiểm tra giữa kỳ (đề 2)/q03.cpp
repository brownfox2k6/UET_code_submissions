// 24021400 Nguyen Trong Dai
// q03.cpp

#include <iostream>
using namespace std;

int main() {
  int m, n;
  cin >> m >> n;

  if (m < 3 || n < 3) {
    cout << "Error";
    return 0;
  }

  for (int i = 1; i <= m; ++i) {
    for (int j = 1; j <= n; ++j) {
      if (i == 1 || i == m) {
        cout << '-';
      } else if (j == 1 || j == n) {
        cout << '|';
      } else {
        cout << '*';
      }
    }
    cout << '\n';
  }
}
