int hammingDistance(int x, int y) {
  int ret = 0;
  while (x || y) {
    ret += (x & 1) != (y & 1);
    x >>= 1;
    y >>= 1;
  }
  return ret;
}
