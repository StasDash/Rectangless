// This is an open source non-commercial project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: http://www.viva64.com

#include "Rectangle.h"
#include <iostream>

int main() {
  figures::Rectangle rect1{1, 1, 5, 5};
  figures::Rectangle rect2{0, 0, 4, 4};

  figures::Rectangle rect3{0, 3, 3, 0};
  figures::Rectangle rect4{5, 10, 8, 8};

  std::cout << rect1.BBox(rect2) << std::endl;
  std::cout << figures::Rectangle::Intersect(rect1, rect2) << std::endl;
  std::cout << figures::Rectangle::Intersect(rect2, rect1) << std::endl;
  std::cout << figures::Rectangle::Intersect(rect3, rect4) << std::endl;
}
