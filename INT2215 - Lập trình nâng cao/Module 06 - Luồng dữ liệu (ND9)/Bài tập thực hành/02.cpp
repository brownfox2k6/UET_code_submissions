#include <iostream>
#include <fstream>
using namespace std;

int main() {
  string path;
  cin >> path;
  ifstream in(path);
  if (!in.is_open()) {
    cout << "Mission failed";
    return 0;
  }
  int mn = 2e9;
  int mx = -2e9;
  int x;
  while (in >> x) {
    mn = min(mn, x);
    mx = max(mx, x);
  }
  cout << mx << ' ' << mn;
}