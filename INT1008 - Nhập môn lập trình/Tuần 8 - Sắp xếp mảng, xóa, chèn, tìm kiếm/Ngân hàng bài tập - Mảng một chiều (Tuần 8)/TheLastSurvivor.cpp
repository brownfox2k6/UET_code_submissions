#include <iostream>
using namespace std;

signed main() {
  int n, k;
  cin >> n >> k;
  cin.ignore();
  string s[n];
  for (string &i : s) {
    getline(cin, i);
  }

  int nxt[n];
  for (int i = 0; i < n; ++i) {
    nxt[i] = (i + 1) % n;
  }
  int cur = 0;
  for (int i = 0; i < n-1; ++i) {
    for (int j = 0; j < k-1; ++j) {
      cur = nxt[cur];
    }
    nxt[cur] = nxt[nxt[cur]];
    cur = nxt[cur];
  }

  cout << s[cur];
}