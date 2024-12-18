#include <iostream>
using namespace std;

long long p(int n) {
  if (n == 0) {
    return 0;
  }
  if (n % 2) {
    return n + p(n-1);
  }
  return -n + p(n-1);
}

int main() {
  int n;
  cin >> n;
  cout << p(n);
}
