#include <iostream>

// Return const
constexpr int get_const_number() {
    return 20;
}

// Return number
int get_number() {
    return 10;
}

int main(int, char**) {
    
    // Initialization consts
    int age;
    std::cin >> age;
    // The initialization of a const variable can be delayed until runtime
    const int a {age}; 
    // Constexpr cannot be delayed until runtime. Only during compilation
    constexpr int b {2};
    
    // The value will be return until runtime
    const int c1 = get_number();
    
    // Not working
    // constexpr int ce1 = get_number();

    // Warning. It is better to use constexpr 
    const int c2 = get_const_number();
    
    return 0;
}
