#include "matrix.hpp"
#include <iostream>
#include <string>
#include <strstream>

using namespace matrix_lib;

int hpx_main() {
  {
    std::stringstream os;
    os << Matrix<int>({
        { 1, 2, 3 },
        { 0, 1, 0 },
        { 0, 0, 1 },
    });

    assert(os.str() == "1, 2, 3\n0, 1, 0\n0, 0, 1\n");

    assert(Matrix<int>({
               { 1, 2, 3 },
               { 0, 1, 0 },
               { 0, 0, 1 },
           }) == Matrix<int>({
                     { 1, 2, 3 },
                     { 0, 1, 0 },
                     { 0, 0, 1 },
                 }));
  }
  {
    Matrix<int> e({
        { 1, 2 },
        { 3, 4 },
    });
    Matrix<int> f({
        { 1, 2, 3 },
        { 4, 5, 6 },
    });
    Matrix<int> ef = e * f;
    assert(ef == Matrix<int>({
                     { 9, 12, 15 },
                     { 19, 26, 33 },
                 }));
  }
  return hpx::local::finalize();
}

int main(int argc, char **argv) {
  return hpx::local::init(hpx_main, argc, argv);
}