#include <iostream>
using namespace std;

int main() {
  int d, m, y;
  char t;
  cin >> d >> t >> m >> t >> y;

  if (d < 0 || m < 0 || y < 0 || m > 12) {
    goto no;
  } else if (m == 2) {
    bool nhuan = ((y % 4 == 0 && y % 100) || y % 400 == 0);
    if ((nhuan && d <= 29) || (!nhuan && d <= 28)) {
      goto yes;
    } goto no;
  } else if (m == 4 || m == 6 || m == 9 || m == 11) {
    if (d <= 30) {
      goto yes;
    } goto no;
  } else {
    if (d <= 31) {
      goto yes;
    } goto no;
  }

  yes: { cout << "yes"; return 0; }
  no: { cout << "no"; return 0; }
}