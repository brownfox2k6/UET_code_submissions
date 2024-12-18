#include <iostream>
using namespace std;

struct rectangle {
  int length, high;
};

/// Ham tinh Chu vi của một hình chữ nhật, hàm không làm thay đổi HCN ban đầu
int getPerimeter(const rectangle &rec) {
  // them code cua ban o day
  return (rec.length + rec.high) * 2;
}

/// Ham tinh dien tich của một hình chữ nhật, hàm không làm thay đổi HCN ban đầu
int getArea(const rectangle &rec) {
  // them code cua ban o day
  return rec.length * rec.high;
}

int main() {
  // them code cua ban o day
  rectangle rec;
  cin >> rec.length >> rec.high;
  cout << getPerimeter(rec) << ' ' << getArea(rec);
}