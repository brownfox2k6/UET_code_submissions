#include <iostream>
#include <fstream>
using namespace std;

void showClue(char *path) {
  ifstream file(path);
  while (!file.eof()) {
    string s;
    getline(file, s);
    cout << s;
  }
}