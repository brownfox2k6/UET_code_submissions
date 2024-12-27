// Tính điểm trung bình môn học

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  // khai bao cac bien
  double a1, b1, c1, a2, b2, a3;
  
  // nhan gia tri tu standard input, su dung cin >>
  cin >> a1 >> b1 >> c1 >> a2 >> b2 >> a3;
  
  // tinh diem TB mon hoc
  double TB = (a1 + b1 + c1) + (a2 + b2) * 2 + a3 * 3;
  TB /= 10;
  
  // in ra gia tri cua TB, su dung cout <<
  cout << fixed << setprecision(2);
  cout << TB;
  
  return 0;
}