#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  double a, b, c;
  string name;
  cin >> a >> b >> c >> name;

  cout << name << ':';
  cout << fixed << setprecision(1);
  cout << (a + b + c) / 3;
}