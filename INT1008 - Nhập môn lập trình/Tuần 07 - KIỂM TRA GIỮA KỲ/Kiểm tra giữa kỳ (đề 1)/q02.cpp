#include <iostream>
using namespace std;

int main() {
  string s, t;
  cin >> s >> t;
  if (s == "good") {
    cout << s << '-' << t;
  } else {
    cout << s << ' ' << t;
  }
}
