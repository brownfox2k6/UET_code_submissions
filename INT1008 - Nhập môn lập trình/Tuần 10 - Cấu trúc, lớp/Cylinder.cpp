#include <iomanip>
#include <iostream>
using namespace std;

const double pi = 3.14;

struct cylinder {
  int radius, high;
};

// Hàm tính diện tích bề mặt,
// hàm này không làm thay đổi thông số của hình trụ ban đầu
double getSurfaceArea(const cylinder &c) {
  // them code cua ban o day
  return 2 * pi * c.radius * (c.radius + c.high);
}

// Hàm tính thể tích hình trụ
// hàm này không làm thay đổi thông số của hình trụ ban đầu
double getVolume(const cylinder &c) {
  // them code cua ban o day
  return pi * c.radius * c.radius * c.high;
}

int main() {
  // them code cua ban o day
  cylinder cl;
  cin >> cl.radius >> cl.high;
  cout << fixed << setprecision(2);
  cout << getSurfaceArea(cl) << ' ' << getVolume(cl);
}
