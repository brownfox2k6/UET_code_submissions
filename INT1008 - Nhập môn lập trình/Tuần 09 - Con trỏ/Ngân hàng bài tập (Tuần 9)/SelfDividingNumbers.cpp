bool tuphanchia(int x) {
  int y = x;
  while (y) {
    int i = y % 10;
    if (i == 0 || x % i) {
      return false;
    }
    y /= 10;
  }
  return true;
}

int* selfDividingNumbers(int left, int right, int* sz) {
  int* ans = new int[10000];
  *sz = 0;
  for (int i = left; i <= right; ++i) {
    if (tuphanchia(i)) {
      ans[(*sz)++] = i;
    }
  }
  return ans;
}