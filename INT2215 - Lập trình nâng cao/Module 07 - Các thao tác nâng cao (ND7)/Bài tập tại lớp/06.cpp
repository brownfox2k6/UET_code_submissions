#include <bits/stdc++.h>
using namespace std;

string add(const string &a, const string &b) {
  string x(rbegin(a), rend(a));
  string y(rbegin(b), rend(b));
  int n = x.length();
  int m = y.length();
  if (n < m) {
    swap(x, y);
    swap(n, m);
  }
  int carry = 0;
  string res;
  for (int i = 0; i < n; ++i) {
    int cur = carry + x[i] - '0';
    if (i < m) {
      cur += y[i] - '0';
    }
    res.push_back(cur % 10 + '0');
    carry = cur / 10;
  }
  if (carry) {
    res.push_back('1');
  }
  reverse(begin(res), end(res));
  return res;
}

int main() {
  string a, b, c;
  cin >> a >> b >> c;

  size_t i = a.find('?');
  if (i != string::npos) {
    for (char x : "0123456789") {
      a[i] = x;
      if (add(a, b) == c) {
        cout << x;
        return 0;
      }
    }
  }
  i = b.find('?');
  if (i != string::npos) {
    for (char x : "0123456789") {
      b[i] = x;
      if (add(a, b) == c) {
        cout << x;
        return 0;
      }
    }
  }
  i = c.find('?');
  if (i != string::npos) {
    for (char x : "0123456789") {
      c[i] = x;
      if (add(a, b) == c) {
        cout << x;
        return 0;
      }
    }
  }
}