#include <iostream>

int main() {
    //variable declaration
    bool aa = true;
    bool bb = false;
    bool cc = false;
    bool dd = false;
    bool ee = true;
    bool A[5] = {aa, bb, cc, dd, ee};
    int B[5] = {0, 1, 2, 3, 4};
    int C[5] = {0, 1, 2, 3, 4};

    for (int i = 0; i <= 4; i++) {
        //run if array A element is true
        if (A[i]) {
            std::cout << "****" << std::endl;
            std::cout << "B: " << B[i] << std::endl;
            std::cout << "C: " << C[i] << std::endl;
            std::cout << "****" << std::endl;
        } else {
            std::cout << "No true values" << std::endl;
        }
    }
    return 0;
}
