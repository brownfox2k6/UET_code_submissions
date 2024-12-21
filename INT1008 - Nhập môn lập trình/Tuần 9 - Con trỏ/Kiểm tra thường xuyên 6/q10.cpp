#include <iostream>
#include <vector>
using namespace std;

signed main() {
  int n, k;
  cin >> n >> k;
  vector<int> rem[k];
  for (int i = 0; i < n; ++i) {
    int x;
    cin >> x;
    rem[x % k].push_back(x);
  }
  for (int i = 0; i < k; ++i) {
    for (int j = 0; j < int(rem[i].size()); ++j) {
      cout << rem[i][j] << ' ';
    }
  }
}
