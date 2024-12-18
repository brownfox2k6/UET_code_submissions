#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

struct triangle {
  int edge1, edge2, edge3;
  triangle(int initEdge1, int initEdge2, int initEdge3) {
    // your code here
    edge1 = initEdge1;
    edge2 = initEdge2;
    edge3 = initEdge3;
  }

  double getArea() {
    double p = (this->edge1 + this->edge2 + this->edge3) / 2.0;
    double area =
        sqrt(p * (p - this->edge1) * (p - this->edge2) * (p - this->edge3));
    if (area == 0) {
      return -1;
    }
    return area;
  }
};

int main() {
  int edge1, edge2, edge3;
  cin >> edge1 >> edge2 >> edge3;
  triangle tri(edge1, edge2, edge3);
  double area = tri.getArea();
  if (area == -1)
    cout << "invalid" << endl;
  else
    cout << fixed << setprecision(2) << area << endl;
  return 0;
}
