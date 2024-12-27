#include <iostream>
#include <vector>
using namespace std;

signed main() {
  vector<string> v;
  string s;
  while (cin >> s) {
    v.push_back(s);
  }
  cout << v.size();
}