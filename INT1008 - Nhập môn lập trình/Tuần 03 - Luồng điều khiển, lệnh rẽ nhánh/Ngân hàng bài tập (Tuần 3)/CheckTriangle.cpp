#include <iostream>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  // sort: a <= b <= css
  int Min = min({a, b, c});
  int Max = max({a, b, c});
  b = a + b + c - Min - Max;
  a = Min;
  c = Max;

  if (a <= 0 || b <= 0 || c <= 0 || a + b <= c) {
    cout << "khong phai tam giac";
  } else if (a == b && a == c) {
    cout << "tam giac deu";
  } else if (a == b || b == c) {
    cout << "tam giac can";
  } else if (a*a + b*b == c*c) {
    cout << "tam giac vuong";
  } else {
    cout << "tam giac thuong";
  }
}