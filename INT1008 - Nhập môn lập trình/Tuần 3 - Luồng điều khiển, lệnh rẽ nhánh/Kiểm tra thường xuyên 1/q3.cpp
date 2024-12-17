#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  double x;
  cin >> x;

  cout << fixed << setprecision(1);
  cout << 3*x*x + x / 2 + 1;
}