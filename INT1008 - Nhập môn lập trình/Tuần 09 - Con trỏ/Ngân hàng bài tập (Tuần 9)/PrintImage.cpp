#include <iomanip>
#include <iostream>
using namespace std;

void printImage(int** image, int height, int width) {
  for (int i = 0; i < height; ++i) {
    for (int j = 0; j < width; ++j) {
      cout << setw(4) << image[i][j];
    }
    cout << '\n';
  }
}