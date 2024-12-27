long long get_max_sum(int a[], int n) {
  long long mx = -1e18;
  for (int i = 0; i < n; ++i) {
    long long s = 0;
    for (int j = i; j < n; ++j) {
      s += a[j];
      if (s > mx) {
        mx = s;
      }
    }
  }
  return mx;
}
