template<class T>
T getSum(T a[], int n) {
  T ret = 0;
  for (int i = 0; i < n; ++i) {
    ret += a[i];
  }
  return ret;
}