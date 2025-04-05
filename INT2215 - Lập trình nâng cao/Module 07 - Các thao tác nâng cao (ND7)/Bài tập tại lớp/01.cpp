#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> v(10, 0);
  for (int i = 0; i < n; ++i) {
    int x;
    cin >> x;
    ++v[x];
  }
  cout << max_element(begin(v), end(v)) - begin(v);
}