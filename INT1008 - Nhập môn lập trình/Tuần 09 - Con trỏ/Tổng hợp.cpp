#include <iostream>
using namespace std;

signed main() {
  int n;
  cin >> n;
  int *a = new int[n];
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  cout << *a;
}