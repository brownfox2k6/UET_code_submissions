public class Cylinder extends Circle {
  private double height = 1;

  public Cylinder() {
  }

  public Cylinder(double r) {
    super(r);
  }

  public Cylinder(double r, double h) {
    super(r);
    height = h;
  }

  public Cylinder(double r, double h, String c) {
    super(r, c);
    height = h;
  }

  public double getHeight() {
    return height;
  }

  public void setHeight(double h) {
    height = h;
  }

  public double getVolume() {
    return height * super.getArea();
  }

  @Override
  public String toString() {
    return "Cylinder[" + super.toString() + ",height=" + height + "]";
  }

  @Override
  public double getArea() {
    return 2 * PI * super.getRadius() * (super.getRadius() + height);
  }
}
