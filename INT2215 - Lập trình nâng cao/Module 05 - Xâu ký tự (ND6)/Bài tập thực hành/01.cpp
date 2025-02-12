#include <iostream>
#include <vector>
using namespace std;

signed main() {
  int n;
  cin >> n;
  vector<int> a(n), b(n);
  for (int &x : a) cin >> x;
  for (int &x : b) cin >> x;

  for (int i = 0; i < n; ++i) {
    if (a[i] != b[i]) {
      cout << "NO";
      return 0;
    }
  }
  cout << "YES";
}