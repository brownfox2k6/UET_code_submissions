#include <iostream>
using namespace std;

void drawLine(int i, int n) {
  int len = 4*n + 1;
  int pos1 = 2*i;
  int pos2 = len - pos1 - 1;
  for (int j = 0; j < len; ++j) {
    if (j == pos1 || j == pos2) {
      cout << '*';
    } else if (j % 2 == 1) {
      cout << ' ';
    } else {
      cout << '.';
    }
  }
  cout << '\n';
}

signed main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; ++i) {
    drawLine(i, n);
  }
  for (int i = n; i >= 0; --i) {
    drawLine(i, n);
  }
}