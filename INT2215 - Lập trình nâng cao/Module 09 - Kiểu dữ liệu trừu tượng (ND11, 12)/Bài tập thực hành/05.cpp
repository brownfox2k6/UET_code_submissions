class Vector {
  double x_, y_;
public:
  Vector(double x = 0, double y = 0);
  void print(int precision = 2, bool newLine = true);
  void truncate(double length);
  bool isOrtho(const Vector &v) const;
  static float dot(const Vector &v1, const Vector &v2);
  static float cross(const Vector &v1, const Vector &v2);
  friend ostream &operator<<(ostream &os, const Vector &v);
};

Vector::Vector(double x, double y) {
  x_ = x;
  y_ = y;
}

void Vector::print(int precision, bool newLine) {
  cout << fixed << setprecision(precision);
  cout << '(' << x_ << ", " << y_ << ')';
  if (newLine) {
    cout << '\n';
  }
}

void Vector::truncate(double length) {
  x_ -= length;
  y_ -= length;
}

bool Vector::isOrtho(const Vector &v) const {
  return dot(*this, v) == 0;
}

float Vector::dot(const Vector &v1, const Vector &v2) {
  return v1.x_ * v2.x_ + v1.y_ * v2.y_;
}

float Vector::cross(const Vector &v1, const Vector &v2) {
  return v1.x_ * v2.y_ - v1.y_ * v2.x_;
}

ostream& operator<<(ostream &os, const Vector &v) {
  os << '(' << v.x_ << ", " << v.y_ << ')';
  return os;
}