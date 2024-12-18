#include <string>
#include <fstream>
#include <cmath>
using namespace std;

double estimatedTime(const char* path) {
  ifstream in(path);
  double x, y, a, b, v;
  string k;
  in >> k >> k >> x >> k >> y >> k >> k >> a >> k >> b >> k >> v;
  double s = sqrt((x-a)*(x-a) + (y-b)*(y-b));
  return s / v;
}