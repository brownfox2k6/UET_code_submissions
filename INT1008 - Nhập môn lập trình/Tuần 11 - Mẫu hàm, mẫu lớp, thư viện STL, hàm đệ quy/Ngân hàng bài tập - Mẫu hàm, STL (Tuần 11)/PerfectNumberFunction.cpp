bool isPerfect(int x) {
  int s = 0;
  for (int i = 1; i*i <= x; ++i) {
    if (x % i == 0) {
      s += i;
      if (i != x / i) {
        s += x / i;
      }
    }
  }
  return s == 2 * x;
}