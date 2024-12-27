#include <iostream>
using namespace std;

struct fraction {
  int numerator, denominator;
  fraction(int _numerator, int _denominator) {
    // them code cua ban o day
    numerator = _numerator;
    denominator = _denominator;
  }
};

int gcd(int a, int b) {
  while (b) {
    int t = a % b;
    a = b;
    b = t;
  }
  return a;
}

fraction addconst(const fraction &a, const fraction &b) {
  // them code cua ban o day
  fraction ret(a.numerator * b.denominator + b.numerator * a.denominator,
               a.denominator * b.denominator);
  int g = gcd(ret.numerator, ret.denominator);
  ret.numerator /= g;
  ret.denominator /= g;
  return ret;
}

int main() {
  // them code cua ban o day
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  fraction A(a, b), B(c, d);
  fraction C = addconst(A, B);
  cout << C.numerator << '/' << C.denominator;
}
