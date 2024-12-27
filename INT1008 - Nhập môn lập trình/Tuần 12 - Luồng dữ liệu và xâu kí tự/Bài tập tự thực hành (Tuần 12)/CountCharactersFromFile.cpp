#include <fstream>
using namespace std;

int countCharacter(const char *path, char letter) {
  if ('A' <= letter && letter <= 'Z') {
    letter += 32;
  }
  ifstream in(path);
  int cnt = 0;
  while (!in.eof()) {
    string s;
    in >> s;
    for (char c : s) {
      cnt += (c == letter || c == letter - 32);
    }
  }
  return cnt;
}