#include <cmath>
#include <iostream>
using namespace std;

int reverse_integer(int x) {
  int neg = (x < 0);
  x = abs(x);
  int i = pow(10, int(log10(x)));
  int ans = 0;
  while (x) {
    ans += (x % 10) * i;
    i /= 10;
    x /= 10;
  }
  return neg? -ans : ans;
}
