#include <iostream>
using namespace std;

struct Vector {
  double x;
  double y;
  Vector(double _x, double _y) {
    x = _x;
    y = _y;
  }
  void printVector() { cout << x << " " << y << endl; }
};

Vector addVector(Vector v1, Vector v2) {
  // Them code cua ban o day
  return Vector(v1.x + v2.x, v1.y + v2.y);
}

int main() {
  // Them code cua ban o day
  Vector v1(0, 0), v2(0, 0);
  cin >> v1.x >> v1.y >> v2.x >> v2.y;
  Vector v = addVector(v1, v2);
  v.printVector();
}