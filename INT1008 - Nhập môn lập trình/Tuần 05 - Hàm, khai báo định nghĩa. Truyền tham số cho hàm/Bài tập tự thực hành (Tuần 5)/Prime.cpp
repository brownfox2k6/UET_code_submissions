#include <iostream>
using namespace std;

int pr(int n) {
  for (int i = 2; i*i <= n; ++i) {
    if (n % i == 0) {
      return false;
    }
  }
  return n > 1;
} 

signed main() {
  int n;
  cin >> n;
  if (pr(n)) {
    cout << "Prime.";
  } else {
    cout << "Not a prime.";
  }
}