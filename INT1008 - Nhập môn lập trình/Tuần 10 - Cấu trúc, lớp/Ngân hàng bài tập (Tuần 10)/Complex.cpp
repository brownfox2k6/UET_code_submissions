#include <iostream>
using namespace std;

struct complexNumber {
  double realPart, imaginaryPart;
  complexNumber() {
    realPart = 0;
    imaginaryPart = 0;
  }
  complexNumber(double initRealPart, double initImaginaryPart) {
    // your code here
    realPart = initRealPart;
    imaginaryPart = initImaginaryPart;
  }
  complexNumber multiply(complexNumber other) {
    // your code here
    return complexNumber(this->realPart * other.realPart -
                             this->imaginaryPart * other.imaginaryPart,
                         this->imaginaryPart * other.realPart +
                             this->realPart * other.imaginaryPart);
  }
};

int main() {
  double realPart, imaginaryPart;
  cin >> realPart >> imaginaryPart;
  complexNumber complex1(realPart, imaginaryPart);
  cin >> realPart >> imaginaryPart;
  complexNumber complex2(realPart, imaginaryPart);
  complexNumber product = complex1.multiply(complex2);
  cout << product.realPart << " " << product.imaginaryPart << endl;
  return 0;
}
