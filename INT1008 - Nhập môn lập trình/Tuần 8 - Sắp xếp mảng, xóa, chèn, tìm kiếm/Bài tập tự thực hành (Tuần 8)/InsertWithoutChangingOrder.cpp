#include <iostream>
#include <iomanip>
using namespace std;

signed main() {
  int n;
  cin >> n;
  double a[n+1];
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  double k;
  cin >> k;

  // tìm vị trí nhỏ nhất mà a[id] > k
  int id = n-1;
  for ( ; id > 0; --id) {
    if (a[id-1] <= k) {
      break;
    }
  }
  // dịch mọi phần tử từ thứ id sang phải
  for (int i = n-1; i >= id; --i) {
    a[i+1] = a[i];
  }
  // chèn k vào vị trí thứ id
  cout << "id " << id << '\n';
  a[id] = k;

  cout << fixed << setprecision(2);
  for (int i = 0; i <= n; ++i) {
    cout << a[i] << ' ';
  }
}
