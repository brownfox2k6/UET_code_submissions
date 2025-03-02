#include <algorithm>
#include <iostream>
using namespace std;

signed main() {
  string s;
  cin >> s;
  do {
    cout << s << '\n';
  } while (next_permutation(begin(s), end(s)));
}