public class Point {
  private double pointX;
  private double pointY;

  public Point(double pointX, double pointY) {
    this.pointX = pointX;
    this.pointY = pointY;
  }

  public double getPointX() {
    return pointX;
  }

  public void setPointX(double pointX) {
    this.pointX = pointX;
  }

  public double getPointY() {
    return pointY;
  }

  public void setPointY(double pointY) {
    this.pointY = pointY;
  }

  /**
   * get distance from other point.
   */
  public double distance(Point newPoint) {
    double dx = Math.pow(pointX - newPoint.getPointX(), 2);
    double dy = Math.pow(pointY - newPoint.getPointY(), 2);
    return Math.sqrt(dx + dy);
  }

  /**
   * check if they're equal in position.
   */
  public boolean equals(Object o) {
    if (o instanceof Point) {
      Point p = (Point) o;
      return pointX == p.getPointX() && pointY == p.getPointY();
    }
    return false;
  }

  public String toString() {
    return String.format("(%.1f,%.1f)", pointX, pointY);
  }
}