int getSum(int* a, int n) {
  int ret = 0;
  for (int i = 0; i < n; ++i) {
    ret += a[i];
  }
  return ret;
}