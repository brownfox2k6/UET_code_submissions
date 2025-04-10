#include <iostream>
#include <algorithm>
using namespace std;

// cộng hai số đã được đảo ngược lại
// ví dụ a=465, b=298 thì res=6541, vì 564+892=1456
string add(const string &a, const string &b) {
  string res;
  bool carry = 0;
  for (size_t i = 0; i < max(a.length(), b.length()); ++i) {
    int cur = carry;
    if (i < a.length()) cur += a[i] - '0';
    if (i < b.length()) cur += b[i] - '0';
    res.push_back(cur % 10 + '0');
    carry = cur / 10;
  }
  if (carry) res.push_back('1');
  return res;
}

int main() {
  string a[3];
  pair<size_t, size_t> unknown;
  for (size_t i = 0; i < 3; ++i) {
    cin >> a[i];
    reverse(begin(a[i]), end(a[i])); // đảo ngược lại để thực hiện phép cộng dễ hơn
    for (size_t j = 0; j < a[i].length(); ++j) {
      if (a[i][j] == '?') {
        unknown = {i, j};
      }
    }
  }
  for (char c : "0123456789") {
    a[unknown.first][unknown.second] = c;
    if (add(a[0], a[1]) == a[2]) {
      cout << c;
      return 0;
    }
  }
}
