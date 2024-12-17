#include <iostream>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  if (b == 0) {
    cout << "no";
  } else {
    cout << (a % b == 0? "yes" : "no");
  }
}