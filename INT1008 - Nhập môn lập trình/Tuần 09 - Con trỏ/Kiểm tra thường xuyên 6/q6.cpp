bool p(int x) {
  for (int i = 2; i*i <= x; ++i) {
    if (x % i == 0) {
      return false;
    }
  }
  return x > 1;
}

long long get_prime_sum(int a[], int n) {
  long long s = 0;
  for (int i = 0; i < n; ++i) {
    if (p(a[i])) {
      s += a[i];
    }
  }
  return s;
}
