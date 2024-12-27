#include <iostream>
#include <algorithm>
using namespace std;

signed main() {
  string s;
  cin >> s;
  reverse(s.begin(), s.end());
  cout << s;
}