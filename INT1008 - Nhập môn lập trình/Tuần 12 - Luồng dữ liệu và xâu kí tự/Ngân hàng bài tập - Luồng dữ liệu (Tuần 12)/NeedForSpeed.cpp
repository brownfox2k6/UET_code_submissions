#include <string>
#include <fstream>
using namespace std;

double averageTime(const char* path) {
  ifstream in(path);
  string s;
  in >> s;
  int cnt = 0;
  double sum = 0;
  double time;
  char c;
  while (in >> time >> c >> time) {
    ++cnt;
    sum += time;
  }
  return sum / cnt;
}