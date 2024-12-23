// không biết sai ở đâu mà được có 4/10

template<class T>
T min(T a, T b) {
  return a < b? a : b;
}

void calc(double t, double &ans, double l, double r, double p) {
  double cnt = min(r, t) - l;
  if (cnt > 0) {
    ans += cnt * p;
  }
}

double get_tax_amount(long long taxable_income) {
  double t = taxable_income / 1e6;
  double a = 0;
  calc(t, a, 0, 60, 5);
  calc(t, a, 60, 120, 10);
  calc(t, a, 120, 216, 15);
  calc(t, a, 216, 384, 20);
  calc(t, a, 384, 624, 25);
  calc(t, a, 624, 960, 30);
  calc(t, a, 960, 1e18, 35);
  return a * 1e4;
}
