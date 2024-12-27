#include <iostream>
using namespace std;

signed main() {
  string s;
  int i, j;
  cin >> s >> i >> j;
  swap(s[i], s[j]);
  cout << s;
}