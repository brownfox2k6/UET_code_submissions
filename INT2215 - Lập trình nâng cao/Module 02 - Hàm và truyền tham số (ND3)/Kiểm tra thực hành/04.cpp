#include <iomanip>
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

signed main() {
  double a, b, c, d;
  cin >> a >> b >> c >> d;

  double dist = sqrt(pow(c-a, 2) + pow(d-b, 2));
  cout << fixed << setprecision(2);
  cout << dist;
}