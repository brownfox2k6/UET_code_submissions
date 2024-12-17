// Tần suất

#include <iostream>
using namespace std;

signed main() {
  int n;
  cin >> n;
  int a[n];
  int cnt[100] = {0};
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
    ++cnt[a[i]];
  }
  for (int i = 0; i < n; ++i) {
    if (cnt[a[i]]) {
      cout << a[i] << ' ' << cnt[a[i]] << '\n';
      cnt[a[i]] = 0;
    }
  }
}