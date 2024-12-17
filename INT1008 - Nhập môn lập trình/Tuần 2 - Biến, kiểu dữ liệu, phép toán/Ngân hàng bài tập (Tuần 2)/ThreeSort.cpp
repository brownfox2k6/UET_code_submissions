#include <iostream>
using namespace std;

signed main() {
  int a, b, c;
  cin >> a >> b >> c;

  int Min = min(a, min(b, c));
  int Max = max(a, max(b, c));
  int Mid = a + b + c - Min - Max;
  cout << Max << ' ' << Mid << ' ' << Min;
}