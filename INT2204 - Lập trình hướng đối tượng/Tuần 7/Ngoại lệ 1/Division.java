public class Division extends BinaryExpression {
  public Division(Expression left, Expression right) {
    super(left, right);
  }

  @Override
  public String toString() {
    return String.format("(%s / %s)", left.toString(), right.toString());
  }

  @Override
  public double evaluate() {
    if (right.evaluate() == 0) {
      throw new ArithmeticException("Lỗi chia cho 0");
    }
    return left.evaluate() / right.evaluate();
  }
}
