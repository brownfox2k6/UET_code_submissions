int maxThree(int a, int b, int c) {
  int ret = a;
  if (ret < b) {
    ret = b;
  }
  if (ret < c) {
    ret = c;
  }
  return ret;
}