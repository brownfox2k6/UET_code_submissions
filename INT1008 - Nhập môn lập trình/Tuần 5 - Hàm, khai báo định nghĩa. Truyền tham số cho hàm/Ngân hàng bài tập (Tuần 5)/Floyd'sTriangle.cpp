#include <iostream>
using namespace std;

void printFloydsTriangle(int n) {
  int x = 1;
  for (int i = 1; i <= n; ++i) {
    for (int j = 0; j < i; ++j) {
      cout << x++ << ' ';
    } 
    cout << '\n';
  }
}