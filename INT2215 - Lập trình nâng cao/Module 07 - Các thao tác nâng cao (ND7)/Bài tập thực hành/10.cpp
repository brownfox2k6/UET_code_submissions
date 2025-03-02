#include <iostream>
#include <vector>
using namespace std;

bool f(int x, int y, vector<vector<int>> &a, int n, int m) {
  if (x < 0 || x >= n || y < 0 || y >= m || a[x][y] != 0) {
    return false;
  }
  if (x == n - 1 && y == m - 1) {
    a[x][y] = 2;
    return true;
  }
  a[x][y] = 2;
  if (f(x+1, y, a, n, m)) {
    return true;
  }
  if (f(x-1, y, a, n, m)) {
    return true;
  }
  if (f(x, y+1, a, n, m)) {
    return true;
  }
  if (f(x, y-1, a, n, m)) {
    return true;
  }
  a[x][y] = 0;
  return false;
}
 

signed main() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> a(n, vector<int>(m));
  for (auto &row : a) {
    for (auto &cell : row) {
      cin >> cell;
    }
  }
  f(0, 0, a, n, m);
  for (auto &row : a) {
    for (auto &cell : row) {
      cout << cell << ' ';
    }
    cout << '\n';
  }
}