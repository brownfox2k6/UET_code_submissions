bool isCollinear(int x1, int y1, int x2, int y2, int x3, int y3) {
  return (y2 - y1) * (x3 - x2) == (x2 - x1) * (y3 - y2);
}