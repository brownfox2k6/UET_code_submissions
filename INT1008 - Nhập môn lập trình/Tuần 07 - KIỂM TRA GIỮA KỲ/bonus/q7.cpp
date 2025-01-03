#include <iostream>
using namespace std;

signed main() {
  int n;
  cin >> n;
  double a[n];
  for (double &x : a) {
    cin >> x;
    if (x < 0 || x > 1) {
      cout << "invalid";
      return 0;
    }
  }

  for (int turn = 1; turn <= n; ++turn) {
    // Lưu vị trí của người có khả năng sống sót cao nhất
    int ibest = -1;
    for (int i = 0; i < n; ++i) {
      if (a[i] >= 0.05 && (ibest == -1 || a[i] > a[ibest])) {
        ibest = i;
      }
    }
    // Nếu không tìm được ai sống sót
    if (ibest == -1) {
      if (turn == 1) {
        cout << "No one is alive.";
      }
      return 0;
    }
    // In ra vị trí của người có khả năng sống sót cao nhất
    cout << ibest << ' ';
    // Coi như đã được cứu, những lượt sau không xét đến nữa
    a[ibest] = 0;
    // Sau khi cứu một người, khả năng sống sót của
    // những người còn lại giảm đi một nửa
    for (int i = 0; i < n; ++i) {
      a[i] /= 2;
    }
  }
}