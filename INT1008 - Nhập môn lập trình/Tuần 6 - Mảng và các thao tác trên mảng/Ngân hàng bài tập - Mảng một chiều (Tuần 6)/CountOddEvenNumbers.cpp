#include <iostream>
using namespace std;

signed main() {
  int n;
  cin >> n;
  int m = n;
  int even = 0;
  for ( ; n--; ) {
    int x;
    cin >> x;
    even += (x % 2 == 0);
  }
  cout << even << ' ' << m - even;
}