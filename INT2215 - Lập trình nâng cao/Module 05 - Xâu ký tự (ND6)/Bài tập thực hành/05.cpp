#include <iostream>
using namespace std;

signed main() {
  int n;
  cin >> n;
  int a[n];
  for (int &x : a) cin >> x;

  for (int i = 0; i < n/2; ++i) {
    if (a[i] != a[n-i-1]) {
      cout << "Asymmetric array.";
      return 0;
    }
  }
  cout << "Symmetric array.";
}