#include <iostream>

int main(int, char**) {
    //  false = 0, true = 1
    bool flag;
    flag = false < true;
    std::cout << "flag = " << flag << std::endl;

    // Bitwise logical operators
    unsigned short int a, b;
    a = 17;
    b = 45;

    std::cout << "\nBitwise logical \n";
    std::cout << "a & b = " << (a & b) << std::endl;
    std::cout << "a | b = " << (a | b) << std::endl;
    std::cout << "a ^ b = " << (a ^ b) << std::endl;
    std::cout << "~a = " << ~a << std::endl;

    // Bitwise Shift
    int n, m, k;
    n = 15;
    m = 60;

    // bitwise shift left (multiply)
    std::cout << "\nBitwise shift: \n";
    std::cout << n << " << " << "1 = " << (n << 1) << std::endl;
    std::cout << n << " << " << "2 = " << (n << 2) << std::endl;
    // bitwise shift right (devide)
    std::cout << m << " >> " << "1 = " << (m >> 1) << std::endl;
    std::cout << m << " >> " << "2 = " << (m >> 2) << std::endl;

    // XOR realisation 
    bool x, y;

    std::cout << "\nXOR REALISATION: (x || y) && !(x && y) \n";
    std::cout << ((x || y) && !(x && y)) << std::endl;

    return 0;
}
