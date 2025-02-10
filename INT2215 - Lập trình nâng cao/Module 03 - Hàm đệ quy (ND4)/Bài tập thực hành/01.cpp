#include <iostream>
using namespace std;

string a, b;

string f(int n) {
  if (n == 1) {
    return b;
  }
  if (n == 0) {
    return a;
  }
  return f(n-1) + f(n-2);
}

signed main() {
  cin >> a >> b;
  for (int i = 0; i <= 10; ++i) {
    cout << f(i) << '\n';
  }
}