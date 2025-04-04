class Vector {
  double x_, y_;
public:
  Vector(double x = 0, double y = 0);
  void print(int precision = 2, bool newLine = true);
  Vector &operator=(const Vector &v);
  Vector operator+(const Vector &v) const;
  Vector operator-(const Vector &v) const;
  Vector &operator+=(const Vector &v);
  Vector &operator-=(const Vector &v);
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

Vector &Vector::operator=(const Vector &v) {
  x_ = v.x_;
  y_ = v.y_;
  return *this;
}

Vector Vector::operator+(const Vector &v) const {
  return Vector(x_ + v.x_, y_ + v.y_);
}

Vector Vector::operator-(const Vector &v) const {
  return Vector(x_ - v.x_, y_ - v.y_);
}

Vector &Vector::operator+=(const Vector &v) {
  x_ += v.x_;
  y_ += v.y_;
  return *this;
}

Vector &Vector::operator-=(const Vector &v) {
  x_ -= v.x_;
  y_ -= v.y_;
  return *this;
}