#include <sstream>
#include <fstream>
#include <iostream>
using namespace std;

void findMovies(char* path) {
  ifstream in(path);
  string s;
  getline(in, s);
  bool ok = false;
  while (getline(in, s)) {
    stringstream ss(s);
    string t;
    string name;
    string desc;
    double rating;
    getline(ss, t, ',');
    getline(ss, name, ',');
    getline(ss, desc, ',');
    ss >> rating;
    if (rating >= 8.0 && desc != " boring") {
      cout << name.substr(1) << '\n';
      ok = true;
    }
  }
  if (!ok) {
    cout << "All are boring!";
  }
}