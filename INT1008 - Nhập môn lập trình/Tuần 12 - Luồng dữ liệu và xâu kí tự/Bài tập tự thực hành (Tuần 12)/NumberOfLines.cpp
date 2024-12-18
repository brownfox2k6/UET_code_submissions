#include <iostream>
#include <fstream>
using namespace std;

int main() {
  string path;
  cin >> path;
  ifstream in(path);
  if (in.is_open()) {
    int cnt = 0;
    while (!in.eof()) {
      string s;
      getline(in, s);
      ++cnt;
    }
    cout << cnt;
    in.close();
  } else {
    cout << "Mission failed";
  }
}
