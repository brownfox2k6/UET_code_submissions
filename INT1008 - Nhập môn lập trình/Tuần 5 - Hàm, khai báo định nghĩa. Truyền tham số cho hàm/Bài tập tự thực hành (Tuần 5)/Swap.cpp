#include <iostream>
using namespace std;

void swap(int &a, int &b) {
  int c = b;
  b = a;
  a = c;
}

int main() {
  int a, b;
  cin >> a >> b;
  swap(a, b);
  cout << a << " " << b;

  return 0;
}