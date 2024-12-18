#include <fstream>
#include <algorithm>
using namespace std;

int reverse(char* path) {
  ifstream in(path);
  int n;
  in >> n;
  string s = to_string(n);
  reverse(begin(s), end(s));
  return stoi(s);
}