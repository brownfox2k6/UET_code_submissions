class Fraction {
  int a, b;
public:
  Fraction(int a = 1, int b = 1);
  friend ostream &operator<<(ostream &os, const Fraction &f);
  Fraction operator+(const Fraction &f) const;
  Fraction operator-(const Fraction &f) const;
  Fraction operator*(const Fraction &f) const;
  Fraction operator/(const Fraction &f) const;
  void simplify();
  bool operator>(const Fraction &f) const;
  bool operator<(const Fraction &f) const;
};

Fraction::Fraction(int _a, int _b) {
  a = _a;
  b = _b;
}

ostream &operator<<(ostream &os, const Fraction &f) {
  if (f.b == 0) {
    os << "invalid";
  } else {
    Fraction c = f;
    c.simplify();
    os << c.a << '/' << c.b;
  }
  return os;
}

Fraction Fraction::operator+(const Fraction &f) const {
  return Fraction(a * f.b + b * f.a, b * f.b);
}

Fraction Fraction::operator-(const Fraction &f) const {
  return Fraction(a * f.b - b * f.a, b * f.b);
}

Fraction Fraction::operator*(const Fraction &f) const {
  return Fraction(a * f.a, b * f.b);
}

Fraction Fraction::operator/(const Fraction &f) const {
  return Fraction(a * f.b, b * f.a);
}

void Fraction::simplify() {
  bool neg = (a < 0) ^ (b < 0);
  a = abs(a);
  b = abs(b);
  int g = __gcd(a, b);
  a /= g;
  b /= g;
  if (neg) {
    a = -a;
  }
}

bool Fraction::operator<(const Fraction &f) const {
  return (*this - f).a < 0;
}

bool Fraction::operator>(const Fraction &f) const {
  return (*this - f).a > 0;
}