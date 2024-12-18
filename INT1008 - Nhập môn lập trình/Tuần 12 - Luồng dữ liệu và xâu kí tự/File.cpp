#include <iostream>
using namespace std;

void housesOfHogwarts(const char *path) {
  freopen(path, "r", stdin);
  int i = 0;
  while (!cin.eof()) {
    string s;
    getline(cin, s);
    if (i++) {
      cout << s << '\n';
    }
  }
}