#include <iostream>
using namespace std;

signed main() {
  string s;
  int k;
  cin >> s >> k;
  s.erase(k, 1);
  cout << s;
}