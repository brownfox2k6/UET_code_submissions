#include <iostream>
#include <vector>
using namespace std;

signed main() {
  vector<string> v;
  string s;
  while (cin >> s) {
    v.push_back(s);
  }
  for (int i = int(v.size() - 1); i >= 0; --i) {
    cout << v[i] << ' ';
  }
}