int* merge(int* a, int n, int* b, int m) {
  int* ret = new int[n+m];
  int i = 0;
  int j = 0;
  int k = 0;
  bool asc = a[0] < a[1];
  while (i < n && j < m) {
    if ((asc && a[i] < b[j]) || (!asc && a[i] > b[j])) {
      ret[k++] = a[i++];
    } else {
      ret[k++] = b[j++];
    }
  }
  while (i < n) {
    ret[k++] = a[i++];
  }
  while (j < m) {
    ret[k++] = b[j++];
  }
  return ret;
}