#include "Point.h"
#include <iostream>
using namespace std;

Point::Point(int x, int y) : x(x), y(y) { } 

void Point::set(int x, int y) {
  this->x = x;
  this->y = y;
}

void Point::show() {
  cout << "(" << x << "," << y << ")" << endl;
}

int main(void) {
  Point p(4,6);
  printf("Hello!\n");
  p.set(2,3);
  p.show();
  return 0;
}
