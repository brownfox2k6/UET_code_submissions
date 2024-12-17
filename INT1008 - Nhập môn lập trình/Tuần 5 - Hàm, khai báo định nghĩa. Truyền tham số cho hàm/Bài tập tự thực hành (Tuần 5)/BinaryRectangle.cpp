#include <iostream>
using namespace std;

void binaryRectangle(int n, int m) {
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      if (i == 0 || i == n-1 || j == 0 || j == m-1) {
        cout << 1;
      } else {
        cout << 0;
      }
    }
    cout << '\n';
  }
}