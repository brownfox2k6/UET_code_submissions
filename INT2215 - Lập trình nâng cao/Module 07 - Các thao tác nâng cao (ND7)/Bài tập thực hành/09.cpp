#include <iostream>
using namespace std;

void f(string &s, int n) {
  static string t = "";
  if (int(t.size()) == n) {
    cout << t << '\n';
    return;
  }
  for (int i = 0; i < int(s.size()); ++i) {
    t.push_back(s[i]);
    f(s, n);
    t.pop_back();
  }
}

signed main() {
  string s;
  cin >> s;
  for (int i = 1; i <= int(s.size()); ++i) {
    f(s, i);
  }
}