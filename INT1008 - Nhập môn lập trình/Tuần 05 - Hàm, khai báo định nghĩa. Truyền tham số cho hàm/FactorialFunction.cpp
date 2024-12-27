// Hàm tính giai thừa

#include <iostream>
using namespace std;

long factorial(int n) {
  // complete the function
  long ans = 1;
  for (int i = 2; i <= n; ++i) {
    ans *= i;
  }
  return ans; 
}
