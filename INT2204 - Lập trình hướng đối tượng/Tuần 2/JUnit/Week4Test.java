import org.junit.Test;

public class Week4Test {
  @Test
  public void testMax2Int1() {
    assertEquals(5, Week4.max2Int(5, 3));
  }

  @Test
  public void testMax2Int2() {
    assertEquals(5, Week4.max2Int(3, 5));
  }

  @Test
  public void testMax2Int3() {
    assertEquals(5, Week4.max2Int(5, 5));
  }

  @Test
  public void testMax2Int4() {
    assertEquals(0, Week4.max2Int(-5, 0));
  }

  @Test
  public void testMax2Int5() {
    assertEquals(-2, Week4.max2Int(-8, -2));
  }

  @Test
  public void testMinArray1() {
    int[] arr = {3, 1, 4, 2};
    assertEquals(1, Week4.minArray(arr));
  }

  @Test
  public void testMinArray2() {
    int[] arr = {5, 5, 5, 5};
    assertEquals(5, Week4.minArray(arr));
  }

  @Test
  public void testMinArray3() {
    int[] arr = {-1, -3, -2, 0};
    assertEquals(-3, Week4.minArray(arr));
  }

  @Test
  public void testMinArray4() {
    int[] arr = {10};
    assertEquals(10, Week4.minArray(arr));
  }

  @Test
  public void testMinArray5() {
    int[] arr = {7, 2, 2, 9, 2};
    assertEquals(2, Week4.minArray(arr));
  }

  @Test
  public void testCalculateBMI1() {
    assertEquals("Thừa cân", Week4.calculateBMI(70, 1.7));
  }

  @Test
  public void testCalculateBMI2() {
    assertEquals("Bình thường", Week4.calculateBMI(66, 1.73));
  }

  @Test
  public void testCalculateBMI3() {
    assertEquals("Bình thường", Week4.calculateBMI(60, Math.sqrt(60/18.5)));
  }

  @Test
  public void testCalculateBMI4() {
    assertEquals("Thiếu cân", Week4.calculateBMI(50, 1.72));
  }

  @Test
  public void testCalculateBMI5() {
    assertEquals("Béo phì", Week4.calculateBMI(90, 1.732));
  }
}