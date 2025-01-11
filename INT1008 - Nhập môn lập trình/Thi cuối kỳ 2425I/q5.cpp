int kDigitsNumbers(int* a, int n, int k) {
  int count = 0;
  for (int i = 0; i < n; ++i) {
    string s = to_string(abs(a[i]));
    count += int(s.length()) == k;
  }
  return count;
}