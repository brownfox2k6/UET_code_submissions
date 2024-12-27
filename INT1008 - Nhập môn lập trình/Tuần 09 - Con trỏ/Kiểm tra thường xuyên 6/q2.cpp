#include <algorithm>
#include <iostream>
#include <iomanip>
using namespace std;

signed main() {
  string a, b;
  cin >> a >> b;

  reverse(begin(a), end(a));
  reverse(begin(b), end(b));
  if (a.length() > b.length()) {
    swap(a, b);
  }
  while (a.length() < b.length()) {
    a.push_back('0');
  }
  string ret;
  bool carry = false;
  for (int i = 0; i < int(a.length()); ++i) {
    int ans = a[i] - '0' + b[i] - '0' + carry;
    ret.push_back('0' + ans % 10);
    carry = ans >= 10;
  }
  if (carry) {
    ret.push_back('1');
  }
  reverse(begin(ret), end(ret));
  cout << ret;
}
