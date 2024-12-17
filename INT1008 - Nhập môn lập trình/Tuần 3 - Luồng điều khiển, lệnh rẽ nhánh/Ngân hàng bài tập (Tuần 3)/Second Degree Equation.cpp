#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  cout << fixed << setprecision(5);
  if (a == 0) {
    // suy bien thanh pt bac 1
    if (b == 0 && c == 0) {
      cout << "phuong trinh co vo so nghiem";
    } else if (b == 0 && c != 0) {
      cout << "phuong trinh vo nghiem";
    } else {
      cout << "phuong trinh co 1 nghiem\n";
      cout << -1.0 * c / b;
    }
  } else {
    int d = b*b - 4*a*c;
    if (d < 0) {
      cout << "phuong trinh vo nghiem";
    } else if (d == 0) {
      cout << "phuong trinh co 1 nghiem\n";
      if (b == 0) {
        cout << "0.00000";
      } else
      cout << 1.0 * -b / (2*a);
    } else {
      cout << "phuong trinh co 2 nghiem\n";
      cout << (-b - sqrtl(d)) / (2*a) << ' ';
      cout << (-b + sqrtl(d)) / (2*a);
    }
  }
}