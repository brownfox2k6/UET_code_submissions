public class Solution {
  static int gcd(int a, int b) {
    while (b != 0) {
      int t = a % b;
      a = b;
      b = t;
    }
    return Math.abs(a);
  }
}