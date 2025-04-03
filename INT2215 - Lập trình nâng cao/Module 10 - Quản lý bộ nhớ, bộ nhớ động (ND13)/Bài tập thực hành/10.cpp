void rFilter(char *s) {
  for (int i = strlen(s) - 1; i >= 0; --i) {
    if (('a' <= s[i] && s[i] <= 'z') || ('A' <= s[i] && s[i] <= 'Z')) {
      break;
    }
    s[i] = '_';
  }
}
