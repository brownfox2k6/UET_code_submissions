public class Circle extends Shape {
  protected Point center;
  protected double radius;

  public Circle() {
    center = new Point(0, 0);
    radius = 1;
  }

  public Circle(double radius) {
    center = new Point(0, 0);
    this.radius = radius;
  }

  /**
   * constructor.
   */
  public Circle(double radius, String color, boolean filled) {
    super(color, filled);
    center = new Point(0, 0);
    this.radius = radius;
  }

  /**
   * constructor.
   */
  public Circle(Point center, double radius, String color, boolean filled) {
    super(color, filled);
    this.center = center;
    this.radius = radius;
  }

  public Circle copy() {
    return new Circle(center, radius, color, filled);
  }

  public Point getCenter() {
    return center;
  }

  public void setCenter(Point center) {
    this.center = center;
  }

  public double getRadius() {
    return radius;
  }

  public void setRadius(double radius) {
    this.radius = radius;
  }

  public double getArea() {
    return Math.PI * radius * radius;
  }

  public double getPerimeter() {
    return 2 * Math.PI * radius;
  }

  public String toString() {
    return String.format("Circle[center=%s,radius=%.1f,color=%s,filled=%s]",
                         center.toString(), radius, color, filled);
  }

  /**
   * check if they're equal in position and radius.
   */
  public boolean equals(Object o) {
    if (o instanceof Circle) {
      Circle other = (Circle) o;
      return center.equals(other.getCenter()) && radius == other.getRadius();
    }
    return false;
  }
}
