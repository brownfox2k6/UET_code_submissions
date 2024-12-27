#include <iostream>
#include <fstream>
using namespace std;

int main() {
  string path;
  cin >> path;
  ifstream file(path);
  if (file.is_open()) {
    cout << "YES";
    file.close();
  } else {
    cout << "NO";
  }
}
