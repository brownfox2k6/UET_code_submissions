// Sắp xếp chẵn lẻ

#include <iostream>
using namespace std;

signed main() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }

  for (int i = 0; i < n; ++i) {
    for (int j = i+1; j < n; ++j) {
      bool need = false;
      need |= (a[j] % 2 == 0 && a[i] % 2 != 0);
      need |= (a[j] % 2 == 0 && a[i] % 2 == 0 && a[j] < a[i]);
      need |= (a[j] % 2 != 0 && a[i] % 2 != 0 && a[j] > a[i]);
      if (need) {
        swap(a[i], a[j]);
      }
    }
    cout << a[i] << ' ';
  }
}