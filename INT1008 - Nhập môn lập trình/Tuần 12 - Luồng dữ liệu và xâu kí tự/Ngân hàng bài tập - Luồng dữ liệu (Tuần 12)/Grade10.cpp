#include <iostream>
#include <fstream>
using namespace std;

void grade10(const char* path) {
  ifstream in(path);
  while (in.good()) {
    string t, ho, ten, thcs4;
    getline(in, t, ',');
    getline(in, ho, ',');
    getline(in, ten, ',');
    getline(in, t, ',');
    getline(in, t, ',');
    getline(in, thcs4, ',');
    if (thcs4 == "10") {
      cout << ho << ' ' << ten << '\n';
    }
  }
}