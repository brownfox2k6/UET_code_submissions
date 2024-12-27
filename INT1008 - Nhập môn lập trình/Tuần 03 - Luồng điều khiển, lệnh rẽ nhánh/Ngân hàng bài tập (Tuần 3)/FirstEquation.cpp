#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  if (a == 0 && b == 0) {
    cout << "phuong trinh co vo so nghiem";
  } else if (a == 0 && b != 0) {
    cout << "phuong trinh vo nghiem";
  } else {
    cout << fixed << setprecision(2) << -1.0 * b / a;
  }
}