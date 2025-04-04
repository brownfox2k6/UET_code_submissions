class MyFraction {
private:
  int a, b;
public:
  MyFraction(int _a = 1, int _b = 1);
  void print() const;
  MyFraction add(const MyFraction &f) const;
  MyFraction substract(const MyFraction &f) const;
  MyFraction multiply(const MyFraction &f) const;
  MyFraction divide(const MyFraction &f) const;
  void simplify();
  int compare(const MyFraction &f) const;
};

MyFraction::MyFraction(int _a, int _b) {
  a = _a;
  b = _b;
}

MyFraction MyFraction::add(const MyFraction &f) const {
  MyFraction c(a * f.b + b * f.a, b * f.b);
  c.simplify();
  return c;
}

MyFraction MyFraction::substract(const MyFraction &f) const {
  MyFraction c(a * f.b - b * f.a, b * f.b);
  c.simplify();
  return c;
}

MyFraction MyFraction::multiply(const MyFraction &f) const {
  MyFraction c(a * f.a, b * f.b);
  c.simplify();
  return c;
}

MyFraction MyFraction::divide(const MyFraction &f) const {
  MyFraction c(a * f.b, b * f.a);
  c.simplify();
  return c;
}

void MyFraction::simplify() {
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

void MyFraction::print() const {
  if (b == 0) {
    cout << "invalid";
    return;
  }
  MyFraction c = *this;
  c.simplify();
  cout << c.a << '/' << c.b;
}

int MyFraction::compare(const MyFraction &f) const {
  MyFraction c = substract(f);
  if (c.a < 0) return -1;
  if (c.a > 0) return 1;
  return 0;
}