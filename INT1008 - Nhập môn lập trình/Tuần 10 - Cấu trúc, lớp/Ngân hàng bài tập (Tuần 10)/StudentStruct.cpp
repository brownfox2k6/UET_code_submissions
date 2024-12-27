#include <algorithm>
#include <iomanip>
#include <iostream>
using namespace std;

struct Student {
  // your code goes here
  // Cac bien thanh vien
  string name;
  double gpa;

  // your code goes here
  // Hai ham khoi tao
  Student() { }
  Student(string _name) {
    name = _name;
  }
  Student(string _name, double _gpa) {
    name = _name;
    gpa = _gpa;
  }

  string grade() {
    // your code goes here
    if (this->gpa >= 3.6) {
      return "xuat sac";
    } else if (this->gpa >= 3.2) {
      return "gioi";
    } else if (this->gpa >= 2.5) {
      return "kha";
    } else {
      return "khong du dieu kien";
    }
  }

  void print() {
    // your code goes here
    cout << fixed << setprecision(1);
    cout << this->name << ' ' << this->gpa << ' ' << this->grade() << '\n';
  }
};

Student get(int n) {
  Student a[n];
  for (Student &s : a) {
    cin >> s.name >> s.gpa;
  }
  return *max_element(a, a+n, [](Student a, Student b) {
    return a.gpa < b.gpa;
  });
}