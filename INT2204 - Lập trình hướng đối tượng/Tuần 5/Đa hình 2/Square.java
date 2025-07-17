public class Square extends Rectangle {
  public Square() {
    super();
  }

  public Square(double side) {
    super(side, side);
  }

  public Square(double side, String color, boolean filled) {
    super(side, side, color, filled);
  }

  public Square(Point topLeft, double side, String color, boolean filled) {
    super(topLeft, side, side, color, filled);
  }

  @Override
  public Square copy() {
    return new Square(topLeft, super.getWidth(), color, filled);
  }

  public double getSide() {
    return getLength();
  }

  public void setSide(double side) {
    setWidth(side);
    setLength(side);
  }

  public void setWidth(double width) {
    setSide(width);
  }

  public void setLength(double length) {
    setSide(length);
  }

  @Override
  public String toString() {
    return String.format("Square[topLeft=%s,side=%.1f,color=%s,filled=%s]",
                         topLeft.toString(), width, color, filled);
  }

  @Override
  public boolean equals(Object o) {
    return super.equals(o);
  } 
}
