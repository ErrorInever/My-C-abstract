#include <iostream>

int main(int, char**) {
    int n = 0;
    // For loop
    std::cout << "for loop: \n";
    for(int i = 0; i <= 4; i++) {
        n++;
        std::cout << n << " ";
    }
    std::cout << "\n";

    n = 0;

    // While loop
    std::cout << "while loop: \n";
    while (n <= 4) {
        n++;
        std::cout << n << " ";
    }
    std::cout << "\n";

    n = 0;
    std::cout << "do while loop: \n";
    do {
        n++;
        std::cout << n << " ";
    } while (n <= 4);
    std::cout << "\n";

    return 0;
}
