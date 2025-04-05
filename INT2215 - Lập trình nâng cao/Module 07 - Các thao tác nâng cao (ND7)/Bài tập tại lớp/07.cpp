#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> v(10, 0);
  int n, x;
  for (cin >> n; n--; ) {
    cin >> x;
    ++v[x];
  }
  bool ok = false;
  for (int i = 0; i <= 9; ++i) {
    if (v[i] == 0) {
      ok = true;
      cout << i << ' ';
    }
  }
  if (!ok) {
    cout << "None";
  }
}