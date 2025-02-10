#include <bits/stdc++.h>
using namespace std;
/* Phần khai báo*/
double triple(double &number) {
    number *= 3;
    return number;
}
/* Bên trong hàm main */
int main() {
  float input = 2.5;
  cout << input << " ";
  cout << triple(input);

}