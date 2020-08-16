#include <iostream>
#include <vector>

/*!
 * Main function of bool array iterator
 * @return
 */
int main() {
  // Variable declaration
  bool a = true;   // element 1
  bool b = false;  // element 2
  bool c = false;  // element 3
  bool d = false;  // element 4
  bool e = true;   // element 5

  // Vector declaration
  std::vector<bool>(A) = {a, b, c, d, e};
  std::vector<int>(B) = {8, 16, 32, 64, 128};

  // Loop
  for (int i = 0; i <= 4; i++) {
    // If array A element is true, print array B value at position
    if (A[i]) {
      std::cout << i << " boolean is true, vector B value at position is: " << B[i] << std::endl;
    } else {
      std::cout << i << " boolean is false" << std::endl;
    }
  }
  return 0;
}
