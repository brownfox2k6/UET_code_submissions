#include <iostream>
using namespace std;

signed main() {
  string s, t;
  getline(cin, s);
  getline(cin, t);
  cout << (s == t? "yes" : "no");
}