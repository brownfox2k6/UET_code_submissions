#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
  string path;
  cin >> path;
  ifstream in(path);
  if (!in.is_open()) {
    cout << "Mission failed";
    return 0;
  }
  string t, type;
  cout << fixed << setprecision(2);
  while (in >> t >> type) {
    if (type == "SQUARE") {
      double w;
      in >> t >> w;
      cout << w * w;
    } else if (type == "RECTANGLE") {
      double w, h;
      in >> t >> w >> t >> h;
      cout << w * h;
    } else if (type == "CIRCLE") {
      double r;
      in >> t >> r;
      cout << 2 * 3.14159 * r;
    }
    cout << '\n';
  }
}
