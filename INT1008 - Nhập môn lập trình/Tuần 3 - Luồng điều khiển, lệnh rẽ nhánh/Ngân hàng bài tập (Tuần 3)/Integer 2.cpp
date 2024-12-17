#include <iostream>
using namespace std;

bool scp(int x) {
  int lo = 1;
  int hi = x;
  while (lo <= hi) {
    int m = (lo + hi) >> 1;
    if ((long long) m * m == x) {
      return true;
    } else if ((long long) m * m < x) {
      lo = m + 1;
    } else {
      hi = m - 1;
    }
  }
  return false;
}

int main() {
  int x;
  cin >> x;
  if (scp(x) && x % 3 == 0 && x % 5 == 1) {
    cout << "YES";
  } else {
    cout << "NO";
  }
}