double calculate(double num1, char operat, double num2) {
  if (operat == '+') {
    return num1 + num2;
  } if (operat == '-') {
    return num1 - num2;
  } if (operat == '*') {
    return num1 * num2;
  } if (operat == '/') {
    return num1 / num2;
  }
  return 0;
}