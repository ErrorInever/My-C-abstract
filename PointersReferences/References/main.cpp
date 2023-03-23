#include <iostream>

int main(int, char**) {
    int value {5};
    int& refval {value}; // references to value

    const int value_1 {4};
    const int& refval_1 {value_1}; // references to const value

    int x {1};
    const int& ref1 {x}; // l-value

    const int y {2};
    const int& ref2 {y}; // const l-value

    const int& ref3 {3}; // r-value
}
