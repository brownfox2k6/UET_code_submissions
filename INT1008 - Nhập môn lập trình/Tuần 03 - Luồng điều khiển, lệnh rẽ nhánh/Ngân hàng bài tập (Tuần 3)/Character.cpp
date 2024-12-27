#include <iostream>
using namespace std;

int main() {
  char c;
  cin >> c;
  if (c >= 65 && c < 65 + 26) {
    cout << "The lower case character corresponding to " << c << " is " << char(c + 32);
  } else if (c >= 97 && c < 97 + 26) {
    cout << "The upper case character corresponding to " << c << " is " << char(c - 32);
  } else {
    cout << c << " is not a letter";
  }
}