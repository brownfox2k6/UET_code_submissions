string combineWordsFromFile(const char fileName[]) {
  ifstream in(fileName);
  vector<string> v;
  string s;
  while (in >> s) {
    v.emplace_back(s);
  }
  sort(rbegin(v), rend(v));
  s = v[0];
  for (int i = 1; i < int(v.size()); ++i) {
    s.push_back(' ');
    s.append(v[i]);
  }
  return s;
}