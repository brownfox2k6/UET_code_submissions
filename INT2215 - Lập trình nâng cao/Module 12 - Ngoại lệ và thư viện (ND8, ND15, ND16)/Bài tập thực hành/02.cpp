#include <fstream>
#include <iostream>
#include <map>
using namespace std;

signed main() {
  string path;
  cin >> path;
  map<char, int> cnt;
  ifstream in(path);
  for (string s; getline(in, path); ) {
    for (char c : s) {
      ++cnt[c];
    }
  }
  for (auto [c, d] : cnt) {
    cout << c << ": " << d << '\n';
  }
}