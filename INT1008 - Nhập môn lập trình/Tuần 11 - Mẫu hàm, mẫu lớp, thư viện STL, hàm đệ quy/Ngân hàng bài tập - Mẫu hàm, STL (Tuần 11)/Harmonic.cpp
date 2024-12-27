double harmonic(int n) {
  double ret = 0;
  for (int i = 1; i <= n; ++i) {
    ret += 1.0 / i;
  }
  return ret;
}