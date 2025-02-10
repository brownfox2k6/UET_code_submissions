long long factorial(int n) {
  long long ret = 1;
  for (int i = 2; i <= n; ++i) {
    ret *= i;
  }
  return ret;
}