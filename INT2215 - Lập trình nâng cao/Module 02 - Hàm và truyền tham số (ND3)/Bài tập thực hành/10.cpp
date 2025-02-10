string toLower(string s) {
  string t;
  for (char c : s) {
    if ('A' <= c && c <= 'Z') {
      t.push_back(c + 32);
    } else {
      t.push_back(c);
    }
  }
  return t;
}