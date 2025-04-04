void print(const Complex &c) {
  if (c.a == 0 && c.b == 1) {
    cout << "i";
  } else if (c.a == 0 && c.b == 0) {
    cout << 0;
  } else if (c.b == 0) {
    cout << c.a;
  } else {
    if (c.a) {
      cout << c.a;
    }
    cout << (c.b < 0? '-' : '+');
    if (abs(c.b) != 1) {
      cout << abs(c.b);
    }
    cout << 'i';
  }
  cout << '\n';
}

Complex add(const Complex &c1, const Complex &c2) {
  Complex c;
  c.a = c1.a + c2.a;
  c.b = c1.b + c2.b;
  return c;
}

int compare(const Complex &c1, const Complex &c2) {
  double m1 = c1.a * c1.a + c1.b * c1.b;
  double m2 = c2.a * c2.a + c2.b * c2.b;
  if (m1 == m2) return 0;
  if (m1 > m2) return 1;
  return -1;
}