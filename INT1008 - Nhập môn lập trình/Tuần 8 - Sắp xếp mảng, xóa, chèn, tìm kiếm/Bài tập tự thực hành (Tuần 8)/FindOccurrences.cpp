#include <iostream>
using namespace std;

signed main() {
  string a, b;
  getline(cin, a);
  getline(cin, b);
  int cnt = 0;
  int i = 0;
  while (true) {
    int nxt = a.find(b, i);
    if (nxt == int(string::npos)) {
      cout << cnt;
      return 0;
    }
    ++cnt;
    i = nxt + 1;
  }
}
