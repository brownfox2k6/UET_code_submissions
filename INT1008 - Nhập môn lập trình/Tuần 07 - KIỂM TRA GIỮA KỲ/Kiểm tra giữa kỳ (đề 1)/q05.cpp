#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
  int n;
  cin >> n;

  map<int, int> cnt;
  for (int i = 0; i < n; ++i) {
    int x;
    cin >> x;
    ++cnt[x];
  }

  vector<int> v;
  for (auto p : cnt) {
    v.push_back(p.first);
  }

  int m = v.size();
  for (int i = 0; i < m; ++i) {
    for (int j = i+1; j < m; ++j) {
      if (cnt[v[j]] < cnt[v[i]]) {
        swap(v[i], v[j]);
      }
    }
  }

  for (int i = m-1; i >= 0; --i) {
    cout << v[i] << ' ';
  }
}
