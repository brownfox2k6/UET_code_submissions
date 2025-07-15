public class Circle extends Shape {
  protected double radius;

  public Circle() {
    this.radius = 1;
  }

  public Circle(double radius) {
    this.radius = radius;
  }

  public Circle(double radius, String color, boolean filled) {
    super(color, filled);
    this.radius = radius;
  }

  public double getRadius() {
    return radius;
  }

  public void setRadius(double radius) {
    this.radius = radius;
  }

  public double getArea() {
    return 3.141592 * radius * radius;
  }

  public double getPerimeter() {
    return 2 * 3.141592 * radius;
  }

  public String toString() {
    return "Circle[radius=" + radius + ",color=" + super.getColor()
           + ",filled=" + super.isFilled() + "]";
  }
}
