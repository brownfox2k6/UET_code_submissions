#include <iostream>
using namespace std;

long long p(int n) {
  if (n == 0) {
    return 1;
  }
  return (2*n + 1) * p(n-1);
}

int main() {
  int n;
  cin >> n;
  cout << p(n);
}
