#include <iostream>
using namespace std;

int gcd(int a, int b) {
  while (b) {
    int t = a % b;
    a = b;
    b = t;
  }
  return a;
}

struct Fraction {
  // your code goes here
  // Cac bien thanh vien
  int a, b;

  // your code goes here
  // Hai ham khoi tao
  Fraction() {
    a = 0;
    b = 0;
  }
  Fraction(int _a, int _b) {
    a = _a;
    b = _b;
  }

  double value() {
    // your code goes here
    if (b == 0) {
      return -1;
    }
    return 1.0 * a / b;
  }

  void print() {
    int g = gcd(this->a, this->b);
    // your code goes here
    cout << this->a / g << '/' << this->b / g;
    cout << '\n';
  }
};

Fraction add(Fraction x, Fraction y) {
  // your code goes here
  return {x.a * y.b + y.a * x.b, x.b * y.b};
}