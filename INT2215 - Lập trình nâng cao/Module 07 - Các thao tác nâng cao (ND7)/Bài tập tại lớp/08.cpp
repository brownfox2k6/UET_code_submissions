#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  for (int &x : a) {
    cin >> x;
  }
  sort(begin(a), end(a));
  int ans = 0;
  for (int i = 0; i < n; ) {
    ++ans;
    auto it1 = upper_bound(begin(a), end(a), a[i] + k) - 1;
    auto it2 = upper_bound(begin(a), end(a), *it1 + k);
    if (it2 == end(a)) {
      cout << ans;
      return 0;
    }
    i = it2 - begin(a);
  }
}