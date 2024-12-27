int getTriangleType(int a, int b, int c) {
  if (a + b <= c || a + c <= b || b + c <= a) {
    return 0;
  }
  if (a == b && b == c) {
    return 2;
  }
  if (a == b || b == c || a == c) {
    return 1;
  }
  return 3;
}