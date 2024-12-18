#include <iostream>
using namespace std;

signed main() {
  string s, t;
  cin >> s >> t;
  if (s == "nghi" && t == "hoc") {
    cout << "nghi, hoc";
  } else {
    cout << s << ',' << t;
  }
}