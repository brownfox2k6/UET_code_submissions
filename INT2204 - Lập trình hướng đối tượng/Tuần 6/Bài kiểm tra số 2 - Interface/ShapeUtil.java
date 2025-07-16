import java.util.ArrayList;
import java.util.List;

public class ShapeUtil {
  /**
   * print info of all shape in shapes.
   */
  public String printInfo(List<GeometricObject> shapes) {
    String ret = "Circle:\n";
    for (GeometricObject shape : shapes) {
      if (shape instanceof Circle) {
        ret += shape.getInfo() + "\n";
      }
    }
    ret += "Triangle:\n";
    for (GeometricObject shape : shapes) {
      if (shape instanceof Triangle) {
        ret += shape.getInfo() + "\n";
      }
    }
    return ret;
  }
}
