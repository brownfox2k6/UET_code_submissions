#include <iostream>
using namespace std;

long long p(int n) {
  if (n == 0) {
    return 0;
  }
  long long s = 1;
  for (int i = 0; i < n; ++i) {
    s *= n;
  }
  return s + p(n-1);
}

int main() {
  int n;
  cin >> n;
  cout << p(n);
}
