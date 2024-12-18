#include <iostream>
using namespace std;

signed main() {
  string s;
  int k;
  char c;
  cin >> s >> k >> c;
  s[k] = c;
  cout << s;
}