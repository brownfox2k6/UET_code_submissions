bool isPrime(int t) {
  for (int i = 2; i*i <= t; ++i) {
    if (t % i == 0) {
      return false;
    }
  }
  return t > 1;
}