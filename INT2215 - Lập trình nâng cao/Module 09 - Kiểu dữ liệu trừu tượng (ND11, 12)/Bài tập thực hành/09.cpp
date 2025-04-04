Point::Point() {
  x = y = 0;
}

Point::Point(double _x, double _y) {
  x = _x;
  y = _y;
}

Point::Point(const Point &other) {
  *this = other;
}

double distance(const Point &p1, const Point &p2) {
  return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}

Triangle::Triangle(Point _p1, Point _p2, Point _p3) {
  p1 = _p1;
  p2 = _p2;
  p3 = _p3;
}

double Triangle::getPerimeter() const {
  return distance(p1, p2) + distance(p2, p3) + distance(p3, p1);
}

double Triangle::getArea() const {
  double p = getPerimeter() / 2;
  return sqrt(p * (p - distance(p1, p2)) * (p - distance(p2, p3)) * (p - distance(p3, p1)));
}