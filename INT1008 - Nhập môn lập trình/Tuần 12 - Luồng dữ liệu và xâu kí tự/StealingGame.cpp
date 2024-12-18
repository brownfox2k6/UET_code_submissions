#include <fstream>
using namespace std;

bool canWinNim(char* path) {
  ifstream in(path);
  int n;
  in >> n;
  if (n % 4 == 0) {
    return false;
  }
  return true;
}