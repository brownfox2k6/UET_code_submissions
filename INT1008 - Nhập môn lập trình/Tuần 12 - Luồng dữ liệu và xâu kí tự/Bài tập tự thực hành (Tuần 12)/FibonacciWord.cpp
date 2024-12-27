#include <iostream>
using namespace std;

int main() {
  cout << "f(0) = a\nf(1) = b\n";
  string a = "a";
  string b = "b";
  for (int i = 2; i <= 10; ++i) {
    string t = b + a;
    a = b;
    b = t;
    cout << "f(" << i << ") = " << b << '\n';
  }
}
