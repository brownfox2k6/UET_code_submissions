public class Triangle implements GeometricObject {
  private Point p1;
  private Point p2;
  private Point p3;

  /**
   * constructor.
   */
  public Triangle(Point p1, Point p2, Point p3) {
    this.p1 = p1;
    this.p2 = p2;
    this.p3 = p3;
    double a = p1.distance(p2);
    double b = p2.distance(p3);
    double c = p3.distance(p1);
    double max = Math.max(Math.max(a, b), c);
    if (a == 0 || b == 0 || c == 0 || a + b + c == 2 * max) {
      throw new RuntimeException();
    }
  }

  public Point getP1() {
    return p1;
  }

  public Point getP2() {
    return p2;
  }

  public Point getP3() {
    return p3;
  }

  /**
   * get area.
   */
  public double getArea() {
    double a = p1.distance(p2);
    double b = p2.distance(p3);
    double c = p3.distance(p1);
    double p = (a + b + c) / 2;
    return Math.sqrt(p * (p - a) * (p - b) * (p - c));
  }

  /**
   * get perimeter.
   */
  public double getPerimeter() {
    double a = p1.distance(p2);
    double b = p2.distance(p3);
    double c = p3.distance(p1);
    return a + b + c;
  }

  public String getInfo() {
    return String.format("Triangle[(%.2f,%.2f),(%.2f,%.2f),(%.2f,%.2f)]", p1.getPointX(),
        p1.getPointY(), p2.getPointX(), p2.getPointY(), p3.getPointX(), p3.getPointY());
  }
}
