#include <iostream>
#include <cstring>
using namespace std;

void nFilter(char* s) {
  int n = strlen(s);
  for (char* c = s; c < s+n; ++c) {
    if (*c == '1' || *c == '3' || *c == '5' || *c == '7' || *c == '9') {
      *c = '_';
    }
  }
}

//// Driver code
// signed main() {
//   char *s;
//   s = new char[50];
//   cin >> s;
//   nFilter(s);
//   cout << s;
// }