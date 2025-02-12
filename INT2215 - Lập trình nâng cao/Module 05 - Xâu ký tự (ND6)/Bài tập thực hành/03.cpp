#include <iostream>
#include <vector>
using namespace std;

signed main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int &x : a) cin >> x;

  for (int i = 0; i < n-1; ++i) {
    for (int j = i+1; j < n; ++j) {
      if (a[j] < a[i]) {
        swap(a[i], a[j]);
      }
    }
  }
  cout << a[0] << ' ';
  for (int i = 1; i < n; ++i) {
    if (a[i] != a[i-1]) {
      cout << a[i] << ' ';
    }
  }
}