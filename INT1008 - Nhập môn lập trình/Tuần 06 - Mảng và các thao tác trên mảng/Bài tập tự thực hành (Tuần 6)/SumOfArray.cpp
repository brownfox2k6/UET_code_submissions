#include <iostream>
using namespace std;

signed main() {
  int n;
  int ret = 0;
  for (cin >> n; n--; ) {
    int x;
    cin >> x;
    ret += x;
  }
  cout << ret;
}