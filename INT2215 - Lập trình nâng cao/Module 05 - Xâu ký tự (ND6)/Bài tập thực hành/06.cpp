#include <iostream>
#include <algorithm>
using namespace std;

signed main() {
  string s;
  getline(cin, s);
  int cnt = count(begin(s), end(s), ' ') + 1;
  cout << cnt;
}