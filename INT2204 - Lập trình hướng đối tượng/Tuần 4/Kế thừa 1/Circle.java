public class Circle {
  private double radius = 1;
  private String color = "white";
  protected static final double PI = 3.14159;

  public Circle() {
  }

  public Circle(double r) {
    radius = r;
  }

  public Circle(double r, String c) {
    radius = r;
    color = c;
  }

  public double getRadius() {
    return radius;
  }

  public void setRadius(double r) {
    radius = r;
  }

  public String getColor() {
    return color;
  }

  public void setColor(String c) {
    color = c;
  }

  public double getArea() {
    return PI * Math.pow(this.radius, 2);
  }

  public String toString() {
    return "Circle[radius=" + radius + ",color=" + color + "]";
  }
}