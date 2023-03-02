#include <iostream>

int main(int, char**) {
    // операции отношений
    int a;
    bool b;

    a = 8;
    b = a; // b = True

    b = false;
    if (a)
        b = true; // на выходе b = true
        std::cout << "b = " << b;

    return 0;
}
