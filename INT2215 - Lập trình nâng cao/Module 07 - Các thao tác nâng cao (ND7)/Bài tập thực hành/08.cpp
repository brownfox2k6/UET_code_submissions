#include <iostream>
using namespace std;

void f(string &s) {
    static string t = "";
    if (int(t.size()) == 2 || int(t.size()) == 3) {
        cout << t << ' ';
    }
    if (int(t.size()) == 3) {
        return;
    }
    for (int i = 0; i < int(s.size()); ++i) {
        t.push_back(s[i]);
        f(s);
        t.pop_back();
    }
}

signed main() {
  string s;
  cin >> s;
  f(s);
}