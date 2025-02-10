void readArray(int a[], int n) {
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
}

bool compareArray(int a[], int b[], int n) {
  for (int i = 0; i < n; ++i) {
    if (a[i] != b[i]) {
      return false;
    }
  }
  return true;
}