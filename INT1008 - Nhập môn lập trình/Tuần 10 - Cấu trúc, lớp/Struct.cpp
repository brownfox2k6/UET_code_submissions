#include <iostream>
using namespace std;

struct Vector {
  double x;
  double y;

  /// Hàm tạo - Tạo ra một Vector với thành phần dữ liệu đã biết trước
  Vector(double _x, double _y) {
    x = _x;
    y = _y;
  }

  /// Hàm in ra màn hình một Vector
  void printVector() { cout << x << " " << y << endl; }
};

/// Hàm tính tổng 2 Vector trả về Vector tổng sau khi tính toán
Vector addVector(const Vector &v1, const Vector &v2) {
  Vector sum(v1.x + v2.x, v1.y + v2.y);
  return sum;
}

int main() {
  double x, y, a, b;
  cin >> x >> y >> a >> b;
  Vector v1(x, y), v2(a, b);
  Vector s = addVector(v1, v2);
  s.printVector();
}