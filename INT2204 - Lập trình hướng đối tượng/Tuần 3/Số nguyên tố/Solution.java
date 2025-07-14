public class Solution {
  static boolean isPrime(int n) {
    for (int i = 2; i * i <= n; ++i) {
      if (n % i == 0) {
        return true;
      }
    }
    return n > 1;
  }
}