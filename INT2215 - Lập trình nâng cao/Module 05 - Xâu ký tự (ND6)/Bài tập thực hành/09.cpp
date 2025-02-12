#include <iostream>
#include <sstream>
using namespace std;

signed main() {
  string s;
  getline(cin, s);
  for (int i = 0; s[i] == ' '; ++i) {
    cout << ' ';
  }
  stringstream ss(s);
  string t;
  while (ss >> t) {
    cout << t << ' ';
  }
}