double evaluateFractionString(string fraction) {
  int id = -1;
  int n = fraction.size();
  for (int i = 0; i < n; ++i) {
    if (fraction[i] == '-') {
      continue;
    } else if (fraction[i] == '/') {
      if (id != -1) {
        throw "Bad fraction string.";
      }
      id = i;
    } else if (fraction[i] < '0' || fraction[i] > '9') {
      throw "Bad fraction string.";
    }
  }
  if (id <= 0 || id == n - 1) {
    throw "Bad fraction string.";
  }
  int a = stoi(fraction.substr(0, id));
  int b = stoi(fraction.substr(id + 1));
  if (b == 0) {
    throw "Bad fraction string.";
  }
  return 1.0 * a / b;
}