#include "matrix.hpp"
#include <iostream>

using namespace matrix_lib;

int hpx_main() {
  Matrix<int> c({
      { 1, 2 },
      { 3, 4 },
  });
  Matrix<int> d({
      { 1, 2 },
      { 3, 4 },
  });
  Matrix<int> cd = c * d;
  std::cout << c << "*\n" << d << "=\n" << cd;
  if (cd == Matrix<int>({
                { 7, 10 },
                { 15, 22 },
            })) {
    std::cout << "Correct result\n";

  } else {
    std::cout << "Matrix incorrect\n";
  }
  return hpx::local::finalize();
}

int main(int argc, char **argv) {
  return hpx::local::init(hpx_main, argc, argv);
}