#include <iostream>
using namespace std;

signed main() {
  int n;
  cin >> n;
  cin.ignore();
  string a[n];
  for (int i = 0; i < n; ++i) {
    getline(cin, a[i]);
  }
  for (int i = 0; i < n; ++i) {
    if (a[i] == "Nemo") {
      cout << a[(i - 1 + n) % n] << " and " << a[(i + 1) % n];
    }
  }
}
