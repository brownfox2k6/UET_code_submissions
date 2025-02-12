#include <cctype>
#include <iostream>
using namespace std;

signed main() {
  string s;
  getline(cin, s);
  int alpha = 0, digit = 0, other = 0;
  for (char c : s) {
    if (isalpha(c)) {
      ++alpha;
    } else if (isdigit(c)) {
      ++digit;
    } else {
      ++other;
    }
  }
  cout << alpha << ' ' << digit << ' ' << other;
}