#include <iostream>
using namespace std;

int main() {
  int *p;
  int x;
  p = &x;
  cin >> *p;
  cout << x;
}