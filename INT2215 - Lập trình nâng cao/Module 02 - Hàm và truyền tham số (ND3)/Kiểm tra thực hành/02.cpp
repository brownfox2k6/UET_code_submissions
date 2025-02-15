#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

signed main() {
  double kg, m;
  cin >> kg >> m;

  cout << fixed << setprecision(2);
  cout << kg / (m * m);
}