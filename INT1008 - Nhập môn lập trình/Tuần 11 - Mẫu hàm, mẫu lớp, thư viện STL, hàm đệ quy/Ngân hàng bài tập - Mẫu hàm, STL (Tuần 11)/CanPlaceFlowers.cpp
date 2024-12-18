bool canPlaceFlowers(int a[], int n, int k) {
  int can = 0;
  for (int i = 0; i < n; ++i) {
    if ((i-1 < 0 || a[i-1] == 0) && a[i] == 0 && (i+1 >= n || a[i+1] == 0)) {
      a[i] = 1;
      ++can;
    }
  }
  return k <= can;
}