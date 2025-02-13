string combine(const vector<string>& words) {
  vector<string> v = words;
  sort(rbegin(v), rend(v));
  string s = v[0];
  for (int i = 1; i < int(v.size()); ++i) {
    s.push_back(' ');
    s.append(v[i]);
  }
  return s;
}