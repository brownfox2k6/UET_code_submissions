void sort(float a[], int n, bool asc) {
  for (int i = 0; i < n; ++i) {
    for (int j = i+1; j < n; ++j) {
      if ((asc && a[j] < a[i]) || (!asc && a[j] > a[i])) {
        int t = a[j];
        a[j] = a[i];
        a[i] = t;
      }
    }
  }
}