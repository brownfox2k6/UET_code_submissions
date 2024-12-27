// Sắp xếp các phần tử nguyên tố

#include <iostream>
using namespace std;

bool p(int x) {
  for (int i = 2; i * i <= x; ++i) {
    if (x % i == 0) {
      return false;
    }
  }
  return x > 1;
}

signed main() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }

  for (int i = 0; i < n; ++i) {
    for (int j = i+1; j < n; ++j) {
      if (a[j] < a[i] && p(a[i]) && p(a[j])) {
        swap(a[i], a[j]);
      }
    }
    cout << a[i] << ' ';
  }
}