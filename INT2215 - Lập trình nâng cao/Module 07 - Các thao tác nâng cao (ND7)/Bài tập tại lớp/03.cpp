#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int64_t> pref(n + 1, 0);
  for (int i = 0; i < n; ++i) {
    int x;
    cin >> x;
    pref[i+1] = pref[i] + x;
  }
  int aL = -1;
  int aR = -1;
  for (int i = 1; i <= n; ++i) {
    for (int j = n; j >= i; --j) {
      if (j - i <= aR - aL) {
        break;
      }
      int64_t s = pref[j] - pref[i - 1];
      if (s / (j - i + 1) >= k) {
        aL = i;
        aR = j;
        break;
      }
    }
  }
  cout << aR - aL + 1 << '\n' << aL << ' ' << aR;
}