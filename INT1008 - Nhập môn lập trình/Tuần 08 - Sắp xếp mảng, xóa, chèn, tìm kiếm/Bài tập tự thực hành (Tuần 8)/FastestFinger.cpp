#include <iostream>
using namespace std;

signed main() {
  string a[4], b[4];
  for (int i = 0; i < 4; ++i) {
    getline(cin, a[i]);
    b[i] = a[i];
  }

  for (int i = 0; i < 4; ++i) {
    for (int j = i+1; j < 4; ++j) {
      if (b[j] < b[i]) {
        swap(b[i], b[j]);
      }
    }
  }

  for (int i = 0; i < 4; ++i) {
    for (int j = 0; j < 4; ++j) {
      if (a[i] == b[j]) {
        cout << char('A' + j) << ' ';
      }
    }
  }
}
