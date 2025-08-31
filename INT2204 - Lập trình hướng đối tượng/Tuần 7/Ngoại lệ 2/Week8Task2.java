import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;

public class Week8Task2 {
  private static final String NOERROR = "Không có lỗi";

  public static void nullPointerEx() {
    String s = null;
    s.isEmpty();
  }

  /**
   * javadoc.
   */
  public static String nullPointerExTest() {
    try {
      nullPointerEx();
      return NOERROR;
    } catch (NullPointerException e) {
      return "Lỗi Null Pointer";
    }
  }

  public static void arrayIndexOutOfBoundsEx() {
    int[] a = {0x3f3f3f3f};
    a[0x3f3f] = 0x2f2f2f;
  }

  /**
   * javadoc.
   */
  public static String arrayIndexOutOfBoundsExTest() {
    try {
      arrayIndexOutOfBoundsEx();
      return NOERROR;
    } catch (ArrayIndexOutOfBoundsException e) {
      return "Lỗi Array Index Out of Bounds";
    }
  }

  public static void arithmeticEx() {
    int a = 0x1f1f1f1f / 0;
  }

  /**
   * javadoc.
   */
  public static String arithmeticExTest() {
    try {
      arithmeticEx();
      return NOERROR;
    } catch (ArithmeticException e) {
      return "Lỗi Arithmetic";
    }
  }

  public static void fileNotFoundEx() throws FileNotFoundException {
    new FileReader(new File("hihihaha.txt"));
  }

  /**
   * javadoc.
   */
  public static String fileNotFoundExTest() {
    try {
      fileNotFoundEx();
      return NOERROR;
    } catch (FileNotFoundException e) {
      return "Lỗi File Not Found";
    }
  }

  public static void ioEx() throws IOException {
    FileReader f = new FileReader(new File("hihihaha.txt"));
    f.read();
  }

  /**
   * javadoc.
   */
  public static String ioExTest() {
    try {
      ioEx();
      return NOERROR;
    } catch (IOException e) {
      return "Lỗi IO";
    }
  }
}
