/**
 *     author: brownfox2k6
 *    created: Wed 06 Nov 2024 22:17:49 Hanoi, Vietnam
**/
#include <iostream>
#include <algorithm>
using namespace std;

signed main() {
  string s;
  getline(cin, s);
  int cnt = count(begin(s), end(s), ' ') + 1;
  cout << cnt << " word";
  if (cnt > 1) {
    cout << 's';
  }
}