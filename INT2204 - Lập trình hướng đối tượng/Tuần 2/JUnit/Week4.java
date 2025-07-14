public class Week4 {
  /**
   * Tim gia tri lon nhat cua hai so nguyen.
   */
  public static int max2Int(int a, int b) {
    return a > b ? a : b;
  }

  /**
   * Tim gia tri nho nhat cua 1 mang so nguyen.
   */
  public static int minArray(int[] array) {
    int mn = array[0];
    for (int i = 1; i < array.length; ++i) {
      if (array[i] < mn) {
        mn = array[i];
      }
    }
    return mn;
  }

  /**
   * Tinh BMI.
   */
  public static String calculateBMI(double weight, double height) {
    double bmi = (double) weight / height / height;
    bmi = Math.round(10 * bmi) / 10f;
    if (bmi >= 25) {
      return "Béo phì";
    } else if (bmi >= 23) {
      return "Thừa cân";
    } else if (bmi >= 18.5) {
      return "Bình thường";
    }
    return "Thiếu cân";
  }
}
