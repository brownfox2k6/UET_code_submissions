#include <iostream>
using namespace std;

signed main() {
  int n, m;
  cin >> n >> m;
  int a[n][m];
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      cin >> a[i][j];
    }
  }
  int x, y;
  cin >> x >> y;
  if (a[x-1][y-1]) {
    cout << "Seat " << x << y << " is sold.";
  } else {
    cout << "Your seat is booked. Please complete the payment.";
  }
}