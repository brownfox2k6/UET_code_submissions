#include <iostream>
using namespace std;

signed main() {
  double p;
  cin >> p;

  if (p >= 3.6) {
    cout << "Xuat sac";
  } else if (p >= 3.2) {
    cout << "Gioi";
  } else if (p >= 2.5) {
    cout << "Kha";
  } else if (p >= 2) {
    cout << "Trung binh";
  } else {
    cout << "Khong ra duoc truong";
  }
}