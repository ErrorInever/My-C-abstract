#include <iostream>


int main(int, char**) {
    int a = 10;
    int b = 6;

    float c = 15.3;
    double d = 3.4;

    std::cout << "Binary operations: \n";
    std::cout << a << " + " << b << " = " << a + b << std::endl;
    std::cout << a << " - " << b << " = " << a - b << std::endl;
    std::cout << a << " / " << b << " = " << a / b << std::endl;
    std::cout << c << " / " << d << " = " << c / d << std::endl;
    std::cout << a << " / " << d << " = " << a / d << std::endl;
    std::cout << a << " % " << b << " = " << a % b << std::endl;

    return 0;
}
