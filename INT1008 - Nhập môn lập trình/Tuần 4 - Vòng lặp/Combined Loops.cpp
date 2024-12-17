// Vòng lặp lồng nhau

#include <iostream>
using namespace std;

signed main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      cout << "* ";
    }
    cout << '\n';
  }
}