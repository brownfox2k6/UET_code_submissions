#include <cmath>
#include <iomanip>
#include <iostream>
#include <set>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  cout << fixed << setprecision(5);
  set<double> st;
  if (a == 0) {
    if (b == 0) {
      if (c == 0) {
        cout << "phuong trinh co vo so nghiem";
        return 0;
      }
    } else {
      double k = -1.0 * c / b;
      if (k < 0) {
        // pass
      } else if (k == 0) {
        st.emplace(0);
      } else {
        st.emplace(-sqrtl(k));
        st.emplace(sqrtl(k));
      }
    }
  } else {
    int d = b*b - 4*a*c;
    if (d < 0) {
      // pass
    } else if (d == 0) {
      double k = -1.0 * b / (2*a);
      if (k < 0) {
        // pass
      } else if (k == 0) {
        st.emplace(0);
      } else {
        st.emplace(-sqrtl(k));
        st.emplace(sqrtl(k));
      }
    } else {
      double k = (-b - sqrtl(d)) / (2*a);
      if (k >= 0) {
        st.emplace(-sqrtl(k));
        st.emplace(sqrtl(k));
      }
      k = (-b + sqrtl(d)) / (2*a);
      if (k >= 0) {
        st.emplace(-sqrtl(k));
        st.emplace(sqrtl(k));
      }
    }
  }

  if (st.size() == 0) {
    cout << "phuong trinh vo nghiem";
  } else {
    cout << "phuong trinh co " << st.size() << " nghiem\n";
    for (double x : st) {
      if (x == 0) {
        cout << "0.00000 ";
      } else {
        cout << x << ' ';
      }
    }
  }
}