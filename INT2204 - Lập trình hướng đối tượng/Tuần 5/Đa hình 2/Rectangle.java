public class Rectangle extends Shape {
  protected Point topLeft;
  protected double width;
  protected double length;

  public Rectangle() {
    topLeft = new Point(0, 0);
    width = length = 1;
  }

  /**
   * constructor.
   */
  public Rectangle(double width, double length) {
    topLeft = new Point(0, 0);
    this.width = width;
    this.length = length;
  }

  /**
   * constructor.
   */
  public Rectangle(double width, double length, String color, boolean filled) {
    super(color, filled);
    topLeft = new Point(0, 0);
    this.width = width;
    this.length = length;
  }

  /**
   * constructor.
   */
  public Rectangle(Point topLeft, double width, double length, String color, boolean filled) {
    super(color, filled);
    this.topLeft = topLeft;
    this.width = width;
    this.length = length;
  }

  /**
   * constructor.
   */
  public Rectangle(Rectangle other) {
    super(other.getColor(), other.isFilled());
    this.topLeft = other.getTopLeft();
    this.width = other.getWidth();
    this.length = other.getLength();
  }

  public Rectangle copy() {
    return new Rectangle(topLeft, width, length, color, filled);
  }

  public Point getTopLeft() {
    return topLeft;
  }

  public void setTopLeft(Point topLeft) {
    this.topLeft = topLeft;
  }

  public double getWidth() {
    return width;
  }

  public void setWidth(double width) {
    this.width = width;
  }

  public double getLength() {
    return length;
  }

  public void setLength(double length) {
    this.length = length;
  }

  public double getArea() {
    return width * length;
  }

  public double getPerimeter() {
    return 2 * (width + length);
  }
  
  public String toString() {
    return String.format("Rectangle[topLeft=%s,width=%.1f,length=%.1f,color=%s,filled=%s]",
                         topLeft.toString(), width, length, color, filled);
  }
  
  /**
   * check if they're equal in position, width and length.
   */
  public boolean equals(Object o) {
    if (o instanceof Rectangle) {
      Rectangle other = (Rectangle) o;
      return topLeft.equals(other.getTopLeft()) && width == other.getWidth()
             && length == other.getLength();
    }
    return false;
  }
}
