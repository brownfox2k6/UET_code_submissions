#include <iostream>
using namespace std;

signed main() {
  int n;
  cin >> n;
  int a[1000];
  int k = 0;
  for (int i = 0; i < n; ++i) {
    int x;
    cin >> x;
    if (x == 7) {
      a[k++] = i;
    }
  }
  if (k == 0) {
    cout << "Not found";
  } else {
    for (int i = k-1; i >= 0; --i) {
      cout << a[i] << ' ';
    }
  }
}