int findLHS(int arr[], int n) {
  int cnt[10000] = {0};
  for (int i = 0; i < n; ++i) {
    ++cnt[arr[i]];
  }
  int ret = 0;
  for (int i = 0; i < 9999; ++i) {
    int x = cnt[i] + cnt[i+1];
    if (x > ret) {
      ret = x;
    }
  }
  return ret;
}