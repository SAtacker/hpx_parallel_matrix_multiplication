#include <hpx/local/init.hpp>
#include <iostream>
#include <matrix.hpp>

using namespace matrix_lib;

int hpx_main() {
  {
    assert(Matrix<int>({
               { 1, 0, 0 },
               { 0, 1, 0 },
               { 0, 0, 1 },
           }) * Matrix<int>({
                    { 1, 2, 3 },
                    { 0, 1, 0 },
                    { 0, 0, 1 },
                }) ==
           Matrix<int>({
               { 1, 2, 3 },
               { 0, 1, 0 },
               { 0, 0, 1 },
           }));
  }
  {
    assert(Matrix<int>({
               { 1, 0, 0 },
               { 0, 0, 1 },
               { 0, 1, 0 },
           }) * Matrix<int>({
                    { 1, 2, 3 },
                    { 0, 1, 0 },
                    { 0, 0, 1 },
                }) ==
           Matrix<int>({
               { 1, 2, 3 },
               { 0, 0, 1 },
               { 0, 1, 0 },
           }));
  }
  return hpx::local::finalize();
}

int main(int argc, char **argv) {
  return hpx::local::init(hpx_main, argc, argv);
}