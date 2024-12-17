#include <string>
using namespace std;

bool circle(string s) {
  int x = 0;
  int y = 0;
  for (int i = 0; i < int(s.length()); ++i) {
    if (s[i] == 'R') {
      ++y;
    } else if (s[i] == 'L') {
      --y;
    } else if (s[i] == 'U') {
      ++x;
    } else {
      --x;
    }
  }
  return (x == 0 && y == 0);
}