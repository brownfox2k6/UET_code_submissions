// Khối switch-case

#include <iostream>
using namespace std;

signed main() {
  pair<int, int> p;
  cin >> p.second >> p.first;

  const pair<int, int> t[12] = {{3, 21}, {4, 20}, {5, 21}, {6, 22}, {7, 23},
                                {8, 23}, {9, 23}, {10, 24}, {11, 23}, {12, 22},
                                {1, 20}, {2, 19}};
  
  if (p >= t[0] && p < t[1]) {
    cout << "Bach Duong";
  } else if (p >= t[1] && p < t[2]) {
    cout << "Kim Nguu";
  } else if (p >= t[2] && p < t[3]) {
    cout << "Song Tu";
  } else if (p >= t[3] && p < t[4]) {
    cout << "Cu Giai";
  } else if (p >= t[4] && p < t[5]) {
    cout << "Su Tu";
  } else if (p >= t[5] && p < t[6]) {
    cout << "Xu Nu";
  } else if (p >= t[6] && p < t[7]) {
    cout << "Thien Binh";
  } else if (p >= t[7] && p < t[8]) {
    cout << "Thien Yet";
  } else if (p >= t[8] && p < t[9]) {
    cout << "Nhan Ma";
  } else if (p >= t[10] && p < t[11]) {
    cout << "Bao Binh";
  } else if (p >= t[11] && p < t[1]) {
    cout << "Song Ngu";
  } else {
    cout << "Ma Ket";
  }
}