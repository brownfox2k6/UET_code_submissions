#include <iostream>
using namespace std;

int main() {
  int x;
  cin >> x;
  int a = x / 100;
  int b = x / 10 % 10;
  int c = x % 10;
  if (a <= c) {
    cout << "invalid";
    return 0;
  }

  int nx = c * 100 + b * 10 + a;
  int y = x - nx;
  a = y / 100;
  b = y / 10 % 10;
  c = y % 10;
  int ny = c * 100 + b * 10 + a;
  cout << y + ny;
}