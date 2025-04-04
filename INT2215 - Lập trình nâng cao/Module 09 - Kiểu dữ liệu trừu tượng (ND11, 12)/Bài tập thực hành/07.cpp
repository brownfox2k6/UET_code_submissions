class Vector {
  double x_, y_;
public:
  Vector(double x = 0, double y = 0);
  void print(int precision = 2, bool newLine = true);
  Vector operator+(double s) const;
  Vector operator-(double s) const;
  Vector operator*(double s) const;
  Vector operator/(double s) const;
  Vector &operator+=(double s);
  Vector &operator-=(double s);
  Vector &operator*=(double s);
  Vector &operator/=(double s);
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

Vector Vector::operator+(double s) const {
  return Vector(x_ + s, y_ + s);
}

Vector Vector::operator-(double s) const {
  return Vector(x_ - s, y_ - s);
}

Vector Vector::operator*(double s) const {
  return Vector(x_ * s, y_ * s);
}

Vector Vector::operator/(double s) const {
  return Vector(x_ / s, y_ / s);
}

Vector &Vector::operator+=(double s) {
  x_ += s;
  y_ += s;
  return *this;
}

Vector &Vector::operator-=(double s) {
  x_ -= s;
  y_ -= s;
  return *this;
}

Vector &Vector::operator*=(double s) {
  x_ *= s;
  y_ *= s;
  return *this;
}

Vector &Vector::operator/=(double s) {
  x_ /= s;
  y_ /= s;
  return *this;
}