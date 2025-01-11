bool isBalance(int* a, int n) {
  for (int i = 0; i < n; ++i) {
    int sumleft = 0;
    for (int j = 0; j < i; ++j) {
      sumleft += a[j];
    }
    int sumright = 0;
    for (int j = i+1; j < n; ++j) {
      sumright += a[j];
    }
    if (sumleft == sumright) {
      return true;
    }
  }
  return false;
}
