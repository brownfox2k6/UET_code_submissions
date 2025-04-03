void reverse(char *s) {
  int lo = 0;
  int hi = strlen(s) - 1;
  while (lo < hi) {
    s[lo] = s[lo] ^ s[hi];
    s[hi] = s[lo] ^ s[hi];
    s[lo] = s[lo] ^ s[hi];
    lo++;
    hi--;
  }
}
