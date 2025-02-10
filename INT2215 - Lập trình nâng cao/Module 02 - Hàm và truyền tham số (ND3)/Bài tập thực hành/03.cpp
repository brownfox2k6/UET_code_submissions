#include <iostream>
using namespace std;

void printArrow(int n, bool left) {
  if (left) {
    int space = n - 1;
    for (int ast = n; ast >= 1; --ast, --space) {
      cout << string(space, ' ') << string(ast, '*') << '\n';
    }
    space += 2;
    for (int ast = 2; ast <= n; ++ast, ++space) {
      cout << string(space, ' ') << string(ast, '*') << '\n';
    }

  } else {
    int space = 0;
    for (int ast = n; ast >= 1; --ast, space += 2) {
      cout << string(space, ' ') << string(ast, '*') << '\n';
    }
    space -= 4;
    for (int ast = 2; ast <= n; ++ast, space -= 2) {
      cout << string(space, ' ') << string(ast, '*') << '\n';
    }
  }
}