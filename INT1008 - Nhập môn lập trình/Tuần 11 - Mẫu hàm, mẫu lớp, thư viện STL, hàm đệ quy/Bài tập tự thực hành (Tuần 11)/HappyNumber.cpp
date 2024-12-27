#include <set>
using namespace std;

bool isHappyNumber(int n) {
  set<int> visited;
  while (true) {
    if (visited.count(n)) {
      return false;
    }
    if (n == 1) {
      return true;
    }
    visited.insert(n);
    int s = 0;
    int m = n;
    while (m) {
      s += (m % 10) * (m % 10);
      m /= 10;
    }
    n = s;
  }
}
