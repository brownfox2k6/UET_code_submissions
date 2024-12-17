#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  cout << fixed << setprecision(2);
  for (int f = a; f <= b; ++f) {
    double c = (f - 32) * 5 / 9.0;
    double k = c + 273.15;
    cout << f << ' ' << c << ' ' << k << '\n';
  }
}