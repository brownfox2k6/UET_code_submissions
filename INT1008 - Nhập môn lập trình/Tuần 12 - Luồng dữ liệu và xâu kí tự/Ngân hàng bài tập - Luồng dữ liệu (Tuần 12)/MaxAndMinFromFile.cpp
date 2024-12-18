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
  long long mx = -1e18;
  long long mn = 1e18;
  long long x;
  while (in >> x) {
    mx = max(mx, x);
    mn = min(mn, x);
  }
  cout << mx << ' ' << mn;
  in.close();
}
