#include <iostream>
#include <cmath>
using namespace std;

bool scp(int n) {
  int x = sqrt(n);
  return x * x == n;
}

signed main() {
  int n;
  cin >> n;
  if (scp(5*n*n+4) || scp(5*n*n-4)) {
    cout << "Thuoc day Fibonacci\n";
  } else {
    cout << "Khong thuoc day Fibonacci\n";
  }
  int a = 1;
  int b = 1;
  cout << "1 1 ";
  while (true) {
    int c = a + b;
    a = b;
    b = c;
    if (b > n) {
      break;
    }
    cout << b << ' ';
  }
}