int hammingDistance(int x, int y) {
  int ret = 0;
  for (int bit = 0; bit < 30; ++bit) {
    ret += (x & (1 << bit)) != (y & (1 << bit));
  }
  return ret;
}