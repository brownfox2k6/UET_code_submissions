public class Solution {
  /**
   * find n-th fibonacci number.
   * 0-based indexing, the 1st fibonacci number is 0.
   */
  public long fibonacci(long n) {
    if (n <= 1) {
      return n;
    }
    long a = 0;
    long b = 1;
    for (long i = 2; i <= n; ++i) {
      if (Long.MAX_VALUE - b < a) {
        return Long.MAX_VALUE;
      }
      long t = a + b;
      a = b;
      b = t;
    }
    return b;
  }
} 