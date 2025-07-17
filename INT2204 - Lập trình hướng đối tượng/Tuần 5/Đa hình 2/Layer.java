import java.util.ArrayList;
import java.util.List;

public class Layer {
  private List<Shape> shapes = new ArrayList<Shape>();

  public void addShape(Shape shape) {
    shapes.add(shape.copy());
  }

  /**
   * remove circles.
   */
  public void removeCircles() {
    List<Shape> keep = new ArrayList<Shape>();
    for (Shape shape : shapes) {
      if (!(shape instanceof Circle)) {
        keep.add(shape.copy());
      }
    }
    shapes = keep;
  }

  /**
   * get info.
   */
  public String getInfo() {
    String ret = "Layer of crazy shapes:\n";
    for (Shape shape : shapes) {
      ret += shape.toString() + '\n';
    }
    return ret;
  }

  /**
   * remove duplicates.
   */
  public void removeDuplicates() {
    ArrayList<Shape> keep = new ArrayList<Shape>();
    for (Shape cur : shapes) {
      boolean ok = true;
      for (Shape k : keep) {
        if (k.equals(cur)) {
          ok = false;
          break;
        }
      }
      if (ok) {
        keep.add(cur.copy());
      }
    }
    shapes = keep;
  }
}
