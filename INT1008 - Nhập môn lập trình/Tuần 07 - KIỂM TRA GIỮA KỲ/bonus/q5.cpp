#include <iostream>
using namespace std;

signed main() {
  string s;
  cin >> s;

  int n = s.length();
  for (int i = 0; 2*i < n-1; ++i) {
    if (s[i] != s[n-i-1]) {
      cout << "NO";
      return 0;
    }
  }
  cout << "YES";
}