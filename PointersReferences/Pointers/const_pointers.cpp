#include <iostream>

int main(int, char**) {
    int value {5};

    // pointer to "const int"
    const int* ptr1 { &value };

    // const pointer to "int"
    int* const ptr2 { &value };

    // const pointer to "const int"
    const int* const ptr3 { &value };

    return 0;
}