public class Solution {
  private int numerator;
  private int denominator = 1;

  /**
   * constructor.
   */
  public Solution(int numerator, int denominator) {
    if (denominator != 0) {
      this.numerator = numerator;
      this.denominator = denominator;
    }
  }

  /**
   * get numerator.
   */
  public int getNumerator() {
    return numerator;
  }

  /**
   * set numerator.
   */
  public void setNumerator(int numerator) {
    this.numerator = numerator;
  }

  /**
   * get denominator.
   */
  public int getDenominator() {
    return denominator;
  }

  /**
   * set denominator.
   */
  public void setDenominator(int denominator) {
    if (denominator != 0) {
      this.denominator = denominator;
    }
  }

  /**
   * find gcd of a and b.
   */
  private int gcd(int a, int b) {
    while (b != 0) {
      int t = a % b;
      a = b;
      b = t;
    }
    return Math.abs(a);
  }

  /**
   * reduce this fraction.
   */
  public Solution reduce() {
    int g = gcd(numerator, denominator);
    if (denominator < 0) {
      numerator = -numerator;
      denominator = -denominator;
    }
    numerator /= g;
    denominator /= g;
    return this;
  }

  /**
   * add other fraction to this fraction.
   */
  public Solution add(Solution other) {
    numerator = numerator * other.getDenominator() + denominator * other.getNumerator();
    denominator *= other.getDenominator();
    return this.reduce();
  }

  /**
   * subtract other fraction from this fraction.
   */
  public Solution subtract(Solution other) {
    numerator = numerator * other.getDenominator() - denominator * other.getNumerator();
    denominator *= other.getDenominator();
    return this.reduce();
  }

  /**
   * multiply this fraction with other fraction.
   */
  public Solution multiply(Solution other) {
    numerator *= other.getNumerator();
    denominator *= other.getDenominator();
    return this.reduce();
  }

  /**
   * divide this fraction by other fraction.
   */
  public Solution divide(Solution other) {
    if (other.getNumerator() == 0) {
      return this;
    }
    numerator *= other.getDenominator();
    denominator *= other.getNumerator();
    return this.reduce();
  }

  /**
   * checks if this fraction equals other fraction.
   */
  public boolean equals(Object obj) {
    if (obj instanceof Solution) {
      Solution other = (Solution) obj;
      double thisVal = (double) numerator / denominator;
      double otherVal = (double) other.getNumerator() / other.getDenominator();
      return Math.abs(thisVal - otherVal) < 1e-7;
    }
    return false;
  }
}