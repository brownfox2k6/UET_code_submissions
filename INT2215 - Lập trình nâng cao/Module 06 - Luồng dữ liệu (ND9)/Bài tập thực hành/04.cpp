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
  int count = 0;
  string s;
  while (getline(in, s)) {
    count++;
  }
  cout << count + 1;
}