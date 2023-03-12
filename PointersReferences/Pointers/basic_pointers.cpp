#include <cstddef>
#include <iostream>

void expample_null_pointer_type(std::nullptr_t){
    std::cout << "This is function with args nullptr type";
}

int main(int, char**) {
    int x{4};
    // Operator adresses-of
    std::cout << "Adress of x variable is " << &x << std::endl;
    // Indirection operator
    std::cout << "Indirection of &x is " << *(&x) << std::endl;
    
    // Pointers

    // Definition and initialization a pointer
    int *iPtr{};
    double* dPtr{}; // best syntax

    // Assign the value to pointer
    int var{5};
    int* ptr{&var};
    
    std::cout << "Adress of variable var = " << &var << std::endl;
    std::cout << "The value of the pointer Ptr{&var} = " << ptr << std::endl;

    // Get value from pointer
    std::cout << "\nGet value from pointer\n";
    int val{5};
    std::cout << "Value of val = " << val << std::endl;
    std::cout << "Adress of val = " << &val << std::endl;
    int* valPtr{&val};
    std::cout << "Pointer to val = " << valPtr << std::endl;
    std::cout << "Get value from pointer of val = " << *valPtr << std::endl; 

    
    // Another way to assign the value to the pointer
    std::cout << "\nAnother way to assign the value to the pointer\n";
    int number{10};
    std::cout << "Number = " << number << std::endl;
    int* nptr{&number}; // the pointer to number variable

    *nptr = 6;
    std::cout << "Number = " << number << std::endl;
    
    // Initialization null pointer
    int* nuPtr {nullptr};
    expample_null_pointer_type(nullptr);

    std::cout << "\n";
    return 0;
}
