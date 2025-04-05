#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  map<int, int> mp;
  for (int i = 0; i < n; ++i) {
    int x;
    cin >> x;
    ++mp[x];
  }
  int ans = 0;
  for (auto [i, c] : mp) {
    if (k == 0) {
      ans += c * (c - 1) / 2;
    } else if (mp.count(i + k)) {
      ans += c * mp[i + k];
    }
  }
  cout << ans;
}