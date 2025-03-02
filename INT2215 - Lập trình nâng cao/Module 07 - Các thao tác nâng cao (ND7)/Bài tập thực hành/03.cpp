#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int &x : a) cin >> x;

  sort(rbegin(a), rend(a));
  long long ans = 0;
  for (int i = 1; i < n; ++i) {
    ans += (long long) i * a[i];
  }
  cout << ans;
}