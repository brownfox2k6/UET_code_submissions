#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

void decrypt(int k, char* message) {
  int n = strlen(message);
  for (int i = 0; i < n; ++i) {
    char *c = message + i;
    if ('A' <= *c && *c <= 'Z') {
      *c -= k % 26;
      if (*c < 'A') {
        *c += 26;
      }
    } else if ('a' <= *c && *c <= 'z') {
      *c -= k % 26;
      if (*c < 'a') {
        *c += 26;
      }
    } else if ('0' <= *c && *c <= '9') {
      *c -= k % 10;
      if (*c < '0') {
        *c += 10;
      }
    }
  }
  ifstream in(message);
  string s;
  while (getline(in, s)) {
    cout << s << '\n';
  }
}

//// Driver code
// signed main() {
//   int k;
//   char s[1000];
//   cin >> k >> s;
//   decrypt(k, s);
// }
