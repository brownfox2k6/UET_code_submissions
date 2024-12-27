// Sắp xếp các phần tử ở vị trí chẵn

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
      if (a[j] > a[i] && i % 2 == 0 && j % 2 == 0) {
        swap(a[i], a[j]);
      }
    }
    cout << a[i] << ' ';
  }
}