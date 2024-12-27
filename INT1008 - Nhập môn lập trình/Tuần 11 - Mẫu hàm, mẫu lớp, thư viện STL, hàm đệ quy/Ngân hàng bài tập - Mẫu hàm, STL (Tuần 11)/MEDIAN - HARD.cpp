#include <iostream>
using namespace std;

int Median(int a[], int n) {
  if (a[0] > a[2])
    swap(a[0], a[2]);
  if (a[1] > a[2])
    swap(a[1], a[2]);

  if (a[3] < a[2])
    swap(a[3], a[2]);
  if (a[4] < a[2])
    swap(a[4], a[2]);

  if (a[0] > a[2])
    swap(a[0], a[2]);
  if (a[1] > a[2])
    swap(a[1], a[2]);

  return a[2];
}