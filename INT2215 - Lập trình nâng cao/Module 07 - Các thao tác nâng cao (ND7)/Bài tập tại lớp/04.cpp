#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int n = s.length();
  set<string> st;
  for (int i = 0; i < n - 1; ++i) {
    for (int j = i + 1; j < n; ++j) {
      string t = s.substr(0, i) + s.substr(i+1, j-i-1) + s.substr(j+1);
      st.emplace(t);
    }
  }
  cout << st.size();
}