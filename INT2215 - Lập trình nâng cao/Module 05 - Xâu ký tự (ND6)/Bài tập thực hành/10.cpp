#include <cctype>
#include <iostream>
using namespace std;

bool check(string &s) {
  int n = s.length();
  if (n < 6 || n > 15) {
    return false; 
  }
  if (isdigit(s[0])) {
    return false;
  }
  for (char c : s) {
    if (!isalnum(c)) {
      return false;
    }
  }
  return true;
}

signed main() {
  string s;
  getline(cin, s);
  if (check(s)) {
    cout << "Valid username.";
  } else {
    cout << "Invalid username.";
  }
}