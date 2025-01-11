#include <iostream>
using namespace std;

struct PhanSo {
  int num, den;
};

int gcd(int a, int b) {
  return b == 0? a : gcd(b, a % b);
}

PhanSo tong(const PhanSo &ps1, const PhanSo &ps2) {
  // your code here
  int num = ps1.num * ps2.den + ps2.num * ps1.den;
  int den = ps1.den * ps2.den;
  bool neg = (num * den) < 0;
  num = abs(num);
  den = abs(den);
  int g = gcd(num, den);
  num /= g;
  den /= g;
  if (neg) {
    num = -num;
  }
  return {num, den};
};

bool ssLonHon(const PhanSo &ps1, const PhanSo &ps2) {
  // your code here
  double v1 = double(ps1.num) / ps1.den;
  double v2 = double(ps2.num) / ps2.den;
  return v1 > v2;
};

int main() {
  int num, den;
  cin >> num >> den;
  PhanSo ps1 = {num, den};
  cin >> num >> den;
  PhanSo ps2 = {num, den};

  PhanSo ps3 = tong(ps1, ps2);
  cout << ps3.num << " " << ps3.den << " " << boolalpha << ssLonHon(ps1, ps2) << endl;
  return 0;
}
