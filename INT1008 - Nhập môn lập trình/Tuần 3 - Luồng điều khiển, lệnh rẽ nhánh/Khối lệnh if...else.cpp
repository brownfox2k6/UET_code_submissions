// Khối if-else

#include <iostream>
using namespace std;

signed main() {
  char c;
  cin >> c;
  if (c >= 'a' && c <= 'z') {
    cout << char(c - 32);
  } else {
    cout << c;
  }
}