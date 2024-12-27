// Hàm đổi chỗ hai số

#include <iostream>
using namespace std;

void swap(int &a, int &b) {
  // complete the function
  int c = a;
  a = b;
  b = c;
}

int main() {
  int a, b;
  cin >> a >> b;
  swap(a, b);
  cout << a << " " << b;

  return 0;
}