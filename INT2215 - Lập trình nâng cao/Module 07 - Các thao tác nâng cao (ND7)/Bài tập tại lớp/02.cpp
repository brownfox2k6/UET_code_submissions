#include <bits/stdc++.h>
using namespace std;

int main() {
  map<int, int> m;
  int n, x;
  for (cin >> n; n--; ) {
    cin >> x;
    --m[x];
  }
  for (cin >> n; n--; ) {
    cin >> x;
    ++m[x];
  }
  for (auto [i, c] : m) {
    if (c) {
      cout << i << ' ';
    }
  }
}